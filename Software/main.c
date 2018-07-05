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

int main(void)
{
	DDRB |= _BV(PB4);

	// Own TWI slave address
	USI_TWI_Slave_Initialise( TWI_slaveAddress );

	sei();


	UN_TELEMETRY temp_telemetry_buffer;
	memset(temp_telemetry_buffer.rawb,0,sizeof(temp_telemetry_buffer.rawb));
	temp_telemetry_buffer.alt.identifier = TELE_DEVICE_ALTITUDE;
	temp_telemetry_buffer.alt.sID = 0;
	temp_telemetry_buffer.alt.altitude = 0;
	temp_telemetry_buffer.alt.maxAltitude = 0;

	int16_t altitude = 0;
	int16_t max_altituted = 0;
	int16_t direction = 1;
	for(;;)
	{
		PINB |= _BV(PB4);
		cli();
		memcpy(telemetry_buffer.rawb, temp_telemetry_buffer.rawb, sizeof(telemetry_buffer.rawb) );
		sei();

		_delay_ms(1000);
		if ( direction > 0 )
		{ 
			altitude++;
			if ( altitude > 100 )
				direction = -1;
		}
		else
		{
			altitude--;
			if ( altitude == 0 )
				direction = 1;
		}

		temp_telemetry_buffer.alt.altitude = SwapEndian_16(altitude);
		if ( altitude > max_altituted )
		{
			max_altituted = altitude;
			temp_telemetry_buffer.alt.altitude = SwapEndian_16(max_altituted);
		}
	}
}

