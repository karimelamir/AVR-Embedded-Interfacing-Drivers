/*
 * app.c
 *
 *  Created on: Sep 1, 2023
 *      Author: abdelrahmanhossam
 */


#include <util/delay.h>
#include "../Include/LIB/STD_TYPES.h"
#include "../Include/LIB/BIT_MATH.h"
#include "../Include/MCAL/DIO/DIO_Interface.h"
#include "../Include/HAL/LCD/LCD_Interface.h"
#define F_CPU 8000000UL




int main (void)
{
	MDIO_voidInit();
	HLCD_voidInit();

	HLCD_voidSendString("Abdelrahman");

	while(1)
	{

	}
}
