/*
 * mmain.c
 *
 *  Created on: Aug 28, 2019
 *      Author: Mariam
 */
/*
 * main.c
 *
 *  Created on: Aug 23, 2019
 *      Author: Mariam
 */
#include"std_types.h"
#include"Bit_calc.h"

#include"DIO_interface.h"
#include"DIO_regs.h"
#include"Led_interface.h"

void main (void)
{
	/*Set port as output*/
	DIO_vidSetPortDirection(PORTA,OUTPUT);
	DIO_vidSetPortValue(PORTD,LOW);
	DIO_vidSetPortDirection(PORTD,INPUT);
	DIO_vidSetPortValue(PORTD,HIGH);



	while(1)
	{

if(PIND_Register==0xF1)       {vidLEDFlashing ();}
else if(PIND_Register==0xF2)  { vidShiftLeft  ();}
else if(PIND_Register==0xF3)  { vidShiftRight ();}
else if(PIND_Register==0xF4)  { vidConv2Leds  ();}
else if(PIND_Register==0xF5)  { vidDiv2Leds   ();}
else if(PIND_Register==0xF6)  { vidPingPong   ();}
else if(PIND_Register==0xF7)  {vidSnakeEffect ();}
else if(PIND_Register==0xF8)  {vid2LedConvAndDiv();}
	}

}
/**********************************************/
/*switch( PIND_Register)
		{case 0xF1: vidLEDFlashing();break;
		 case 0xF2: vidShiftLeft  ();break;
		 case 0xF3: vidShiftRight ();break;
		 case 0xF4: vidConv2Leds  ();break;
		 case 0xF5: vidDiv2Leds  ();break;
		 case 0xF6: vidPingPong  ();break;
		 case 0xF7:vidSnakeEffect();break;
		 case 0xF8:vid2LedConvAndDiv();break;
		}

*/
