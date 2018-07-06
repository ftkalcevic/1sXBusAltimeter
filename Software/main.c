/*
 * 1sXBusAltimeter.c
 *
 * Created: 5/07/2018 10:19:35 AM
 * Author : Frank Tkalcevic
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <string.h>
#include "USI_TWI_Slave.h"
#include "XBus.h"
#include "Endianness.h"

const uint8_t TWI_slaveAddress = TELE_DEVICE_ALTITUDE;

// Altimeter pins for bit bang SPI (names relative to altimeter)
#define ALT_CLK		PB4
#define ALT_DO		PB1
#define ALT_DI		PB3

#define ALT_CMD_ADC_READ		0
#define ALT_CMD_RESET			0x1E
#define ALT_CMD_CONVERT_D1_256	0x40
#define ALT_CMD_CONVERT_D1_512	0x42
#define ALT_CMD_CONVERT_D1_1024	0x44
#define ALT_CMD_CONVERT_D1_2048	0x46
#define ALT_CMD_CONVERT_D1_4096	0x48
#define ALT_CMD_CONVERT_D2_256	0x50
#define ALT_CMD_CONVERT_D2_512	0x52
#define ALT_CMD_CONVERT_D2_1024	0x54
#define ALT_CMD_CONVERT_D2_2048	0x56
#define ALT_CMD_CONVERT_D2_4096	0x58
#define ALT_CMD_PROM_READ		0xA0

typedef union UN16
{
	uint16_t u16;
	int16_t i16;
	uint8_t raw[2];
} UN16;

typedef union UN32
{
	uint32_t u32;
	int32_t i32;
	uint8_t raw[4];
} UN32;


static uint8_t spi_send(uint8_t out)
{
	uint8_t in = 0;
	// Mode 0, MSB
	for ( int i = 0; i < 8; i++ )
	{
		if ( out & 0x80 )
			PORTB |= _BV(ALT_DI);
		else
			PORTB &= ~_BV(ALT_DI);

		PORTB |= _BV(ALT_CLK);
		out <<= 1;
		if ( PINB & _BV(ALT_DO) )
			in |= 0x80;
		PORTB &= ~_BV(ALT_CLK);
		in <<= 1;
	}
	return in;
}

static void spi_init()
{
	DDRB |= _BV(ALT_CLK) | _BV(ALT_DI);	// outputs
	PORTB = 0;
}

static uint16_t ReadAltimeterProm(uint8_t addr)
{
	spi_send(ALT_CMD_PROM_READ + addr*2);
	UN16 prom;
	prom.raw[1] = spi_send(0);
	prom.raw[0] = spi_send(0);
	return prom.u16;
}

static void InitialiseAltimeter()
{
	// Reset
	spi_send(ALT_CMD_RESET);
	_delay_ms(3);

	uint16_t c0 = ReadAltimeterProm(0);
	uint16_t c1 = ReadAltimeterProm(1);
	uint16_t c2 = ReadAltimeterProm(2);
	uint16_t c3 = ReadAltimeterProm(3);
	uint16_t c4 = ReadAltimeterProm(4);
	uint16_t c5 = ReadAltimeterProm(5);
	uint16_t c6 = ReadAltimeterProm(6);
	uint16_t crc = ReadAltimeterProm(7);
}

static void ReadTempAndPressure()
{
	uint32_t d1, d2;
	UN32 d;
	spi_send(ALT_CMD_CONVERT_D1_4096);
	_delay_ms(10);
	spi_send(ALT_CMD_ADC_READ);
	d.raw[2] = spi_send(0);
	d.raw[1] = spi_send(0);
	d.raw[0] = spi_send(0);
	d.raw[3] = 0;
	d1 = d.u32;

	spi_send(ALT_CMD_CONVERT_D2_4096);
	_delay_ms(10);
	spi_send(ALT_CMD_ADC_READ);
	d.raw[2] = spi_send(0);
	d.raw[1] = spi_send(0);
	d.raw[0] = spi_send(0);
	d.raw[3] = 0;
	d2 = d.u32;
}

int main(void)
{
	DDRB = 0;

	spi_init();

	// Own TWI slave address
	USI_TWI_Slave_Initialise( TWI_slaveAddress );

	sei();

	int16_t altitude = 0x7FFF;
	int16_t old_altitude = altitude;
	int16_t max_altitude = 0x7FFF;

	UN_TELEMETRY temp_telemetry_buffer;
	memset(temp_telemetry_buffer.rawb,0,sizeof(temp_telemetry_buffer.rawb));
	temp_telemetry_buffer.alt.identifier = TELE_DEVICE_ALTITUDE;
	temp_telemetry_buffer.alt.sID = 0;
	temp_telemetry_buffer.alt.altitude = SwapEndian_16(altitude);
	temp_telemetry_buffer.alt.maxAltitude = SwapEndian_16(max_altitude);
	memcpy(telemetry_buffer.rawb, temp_telemetry_buffer.rawb, sizeof(telemetry_buffer.rawb) );

	InitialiseAltimeter();


	for(;;)
	{
		ReadTempAndPressure();
		_delay_ms(5000);

		if ( altitude != old_altitude )
		{
			temp_telemetry_buffer.alt.altitude = SwapEndian_16(altitude);
			if ( altitude > max_altitude )
			{
				max_altitude = altitude;
				temp_telemetry_buffer.alt.altitude = SwapEndian_16(max_altitude);
			}
			cli();
			memcpy(telemetry_buffer.rawb, temp_telemetry_buffer.rawb, sizeof(telemetry_buffer.rawb) );
			sei();

			old_altitude = altitude;
		}
	}
}

