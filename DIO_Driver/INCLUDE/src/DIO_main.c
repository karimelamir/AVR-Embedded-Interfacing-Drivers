/*
 * DIO_main.c
 *
 *  Created on: Sep 26, 2024
 *      Author: karim
 */

#include"LIB/STD_TYPES.h"
#include"LIB/BIT_MATH.h"
#include"util/delay.h"
#include"DIO_interface.h"
#define F_CPU 8000000UL

int main ()
{
	MDIO_voidInit();
	while(1)
	{
		MDIO_voidTogglePinValue(DIO_PORTA, PIN0);
		_delay_ms(1000);
	}
	return 0;
}

