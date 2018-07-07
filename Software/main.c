/*
 * 1sXBusAltimeter.c
 *
 * Created: 5/07/2018 10:19:35 AM
 * Author : Frank Tkalcevic
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include <util/delay.h>
#include <string.h>
#include <stdlib.h>
#include "USI_TWI_Slave.h"
#include "XBus.h"
#include "Endianness.h"
#include "i2csoft.h"

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

#define ALT_ADDRESS_WRITE		0b11101110
#define ALT_ADDRESS_READ		0b11101111

// global
UN_TELEMETRY telemetry_buffer;
static int16_t altitude,ground_altitude;
static uint16_t c1,c2,c3,c4,c5,c6;
static int32_t last_p;
#define SAMPLES_COUNT	8
static int32_t alt_history[SAMPLES_COUNT];
static uint8_t alt_history_ptr;



#include "altitudemap.h"


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



static uint16_t ReadAltimeterProm(uint8_t addr)
{
	SoftI2CStart();
	SoftI2CWriteByte(ALT_ADDRESS_WRITE);
	SoftI2CWriteByte(ALT_CMD_PROM_READ + addr*2);
	SoftI2CStop();
	
	SoftI2CStart();
	SoftI2CWriteByte(ALT_ADDRESS_READ);
	UN16 prom;
	prom.raw[1] = SoftI2CReadByte(1);
	prom.raw[0] = SoftI2CReadByte(0);
	SoftI2CStop();
	return prom.u16;
}


////********************************************************
////! @brief calculate the CRC code for details look into CRC CODE NOTES
////!
////! @return crc code
////********************************************************
//unsigned char crc4(unsigned int n_prom[])
//{
	//int cnt; // simple counter
	//unsigned int n_rem; // crc reminder
	//unsigned int crc_read; // original value of the crc
	//unsigned char n_bit;
	//n_rem = 0x00;
	//crc_read=n_prom[7]; //save read CRC
	//n_prom[7]=(0xFF00 & (n_prom[7])); //CRC byte is replaced by 0
	//for (cnt = 0; cnt < 16; cnt++) // operation is performed on bytes
	//{ // choose LSB or MSB
		//if (cnt%2==1) 
			//n_rem ^= (unsigned short) ((n_prom[cnt>>1]) & 0x00FF);
		//else 
			//n_rem ^= (unsigned short) (n_prom[cnt>>1]>>8);
		//for (n_bit = 8; n_bit > 0; n_bit--)
		//{
			//if (n_rem & (0x8000))
			//{
				//n_rem = (n_rem << 1) ^ 0x3000;
			//}
			//else
			//{
				//n_rem = (n_rem << 1);
			//}
		//}
	//}
	//n_rem= (0x000F & (n_rem >> 12)); // // final 4-bit reminder is CRC code
	//n_prom[7]=crc_read; // restore the crc_read to its original place
	//return (n_rem ^ 0x00);
//}


static void InitialiseAltimeter()
{
	// Reset
	SoftI2CStart();
	SoftI2CWriteByte(ALT_ADDRESS_WRITE);
	SoftI2CWriteByte(ALT_CMD_RESET);
	SoftI2CStop();
	_delay_ms(3);

	// reserved = ReadAltimeterProm(0);
	c1 = ReadAltimeterProm(1);
	c2 = ReadAltimeterProm(2);
	c3 = ReadAltimeterProm(3);
	c4 = ReadAltimeterProm(4);
	c5 = ReadAltimeterProm(5);
	c6 = ReadAltimeterProm(6);
	// crc = ReadAltimeterProm(7);

//	uint8_t crc = crc4(prom);
//	if ( prom[7] != crc )
//		for(;;);
}

static uint32_t ReadADC( uint8_t cmd )
{
	UN32 d;

	SoftI2CStart();
	SoftI2CWriteByte(ALT_ADDRESS_WRITE);
	SoftI2CWriteByte(cmd);
	SoftI2CStop();

	_delay_ms(10);

	SoftI2CStart();
	SoftI2CWriteByte(ALT_ADDRESS_WRITE);
	SoftI2CWriteByte(ALT_CMD_ADC_READ);
	SoftI2CStop();

	SoftI2CStart();
	SoftI2CWriteByte(ALT_ADDRESS_READ);
	d.raw[2] = SoftI2CReadByte(1);
	d.raw[1] = SoftI2CReadByte(1);
	d.raw[0] = SoftI2CReadByte(0);
	SoftI2CStop();
	d.raw[3] = 0;

	return d.u32;
}


static void ReadTempAndPressure()
{
	uint32_t d1 = ReadADC(ALT_CMD_CONVERT_D1_4096);
	uint32_t d2 = ReadADC(ALT_CMD_CONVERT_D2_4096);

	int32_t dT = d2;
	dT -= ((uint32_t)c5) << 8;
	int64_t T = dT;
	T *= c6;
	T >>= 23;
	T += 2000;

	//int16_t t = T/10;
	//altitude = t;

	int64_t off = c2;
	off <<= 17;
	int64_t off2 = c4;
	off2 *= dT;
	off2 >>= 6;
	off += off2;

	int64_t sens = c1;
	sens <<= 16;
	int64_t sens2 = c3;
	sens2 *= dT;
	sens2 >>= 7;
	sens += sens2;

	if ( T < 2000 ) // T < 20C
	{
		int64_t T2 = dT;
		T2 *= dT;
		T2 >>= 31;

		int64_t off2 = T;
		off2 -= 2000;
		off2 *= off2;
		int64_t sens2 = off2;
		off2 *= 61;
		off2 >>= 4;

		sens2 <<= 2;

		T=T-T2;
		off -= off2;
		sens -= sens2;
	}


	int64_t p64 = d1;
	p64 *= sens;
	p64 >>= 21;
	p64 -= off;
	p64 >>= 15;

	int32_t p_temp = p64;
	int32_t p = (p_temp * 7 + last_p)/8;
	last_p = p_temp;
	
	// interpolate the pressure - the value calculated above is mbar * 100.
	ldiv_t results = ldiv( p, 10 );
	uint16_t index, fraction;	
	if ( results.quot < MIN_PRESSURE )
	{
		index = ALTITUTEMAP_ROWS-1;
		fraction = 0;
	}
	else if ( results.quot > MAX_PRESSURE )
	{
		index = 0;
		fraction = 0;
	}
	else
	{
		index = MAX_PRESSURE - results.quot;	// max pressure is at the beginning of the array.
		fraction = results.rem;
	}

	if ( index == 0 )
		altitude = ((int16_t)pgm_read_word(AltituteMap+index)) >> 1;
	else
	{
		int32_t altitude_min = ((int16_t)pgm_read_word(AltituteMap+index-1));
		int32_t altitude_max = ((int16_t)pgm_read_word(AltituteMap+index));
		altitude = ((altitude_max - altitude_min) * fraction + altitude_min) / 2;
	}
	alt_history[alt_history_ptr++] = altitude;
	if ( alt_history_ptr >=  SAMPLES_COUNT )
		alt_history_ptr = 0;
	int32_t sum = 0;
	for (uint8_t i = 0; i < SAMPLES_COUNT; i++ )
		sum += alt_history[i];
	altitude = sum / SAMPLES_COUNT;
	//altitude = p-100000;
}

int main(void)
{
	DDRB = 0;

	//spi_init();
	SoftI2CInit();

	// Own TWI slave address
	USI_TWI_Slave_Initialise( TWI_slaveAddress );

	sei();

	altitude = 0x7FFF;
	int16_t old_altitude = altitude;
	int16_t max_altitude = 0x7FFF;

	UN_TELEMETRY temp_telemetry_buffer;
	temp_telemetry_buffer.alt.identifier = TELE_DEVICE_ALTITUDE;
	temp_telemetry_buffer.alt.sID = 0;
	temp_telemetry_buffer.alt.altitude = SwapEndian_16(altitude);
	temp_telemetry_buffer.alt.maxAltitude = SwapEndian_16(max_altitude);
	memcpy(telemetry_buffer.rawb, temp_telemetry_buffer.rawb, sizeof(telemetry_buffer.rawb) );

	InitialiseAltimeter();

	// Prime the average buffer
	alt_history_ptr = 0;
	for (uint8_t i = 0; i < SAMPLES_COUNT; i++ )
		ReadTempAndPressure();
	ground_altitude = altitude;

	for(;;)
	{
		ReadTempAndPressure();
		//_delay_ms(5000);

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

