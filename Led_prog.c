
#include"std_types.h"
#include"Bit_calc.h"
//#include<util/delay.h>
#include"DIO_interface.h"
#include"DIO_regs.h"

u8 LED_u8Iteration;
u8 Led_u8Arr2Led[4]={0x81,0x42,0x24,0x18};

/*1*/
/*Flashing every 500 ms*/
void vidLEDFlashing (void)
{
	while(1)
	{
		DIO_vidSetPortValue(PORTA,0x6E);
				//_delay_ms(250);
                    for(int i=0; i<25000; i++);
		DIO_vidSetPortValue(PORTA,0x00);
                //_delay_ms(250);
                    for(int i=0; i<25000; i++);
	}

		}
/****************************************************************************************************************/
/*2*/
/*Shifting Left every 250 ms*/
void vidShiftLeft(void)
{
	while(1)
	{
	for(LED_u8Iteration=0;LED_u8Iteration<8;LED_u8Iteration++)
	{
		DIO_vidSetPortValue(PORTA,(1<<LED_u8Iteration));
		//_delay_ms(250);
        for(int i=0; i<25000; i++);

	}
	}

}
/****************************************************************************************************************/
/*3*/
/*Shifting Right every 250 ms*/
void vidShiftRight(void)
{while(1){
for(LED_u8Iteration=0;LED_u8Iteration<8;LED_u8Iteration++)
			{
				DIO_vidSetPortValue(PORTA,(128>>LED_u8Iteration));
				//_delay_ms(250);
                for(int i=0; i<25000; i++);

			}
}
}
/****************************************************************************************************************/
/*4*/
/*2 LEDs converging every 300 ms*/
void vidConv2Leds(void)
{
	while(1){

	for(LED_u8Iteration=0;LED_u8Iteration<4;LED_u8Iteration++)
	{
	DIO_vidSetPortValue(PORTA,Led_u8Arr2Led[LED_u8Iteration]);
		//_delay_ms(500);
        for(int i=0; i<25000; i++);for(int i=0; i<25000; i++);
	}

}
}
/********************************************************************************************************/
/*5*/
/*2 LEDs diverging every 300 ms*/
void vidDiv2Leds(void)
{
	while(1){

	for(LED_u8Iteration=4;LED_u8Iteration>0;LED_u8Iteration--)
	{
	DIO_vidSetPortValue(PORTA,Led_u8Arr2Led[LED_u8Iteration-1]);
		//_delay_ms(500);
        for(int i=0; i<25000; i++);
        for(int i=0; i<25000; i++);
	}

}
}
/********************************************************************************************************/
/*6*/
/*Ping Pong effect*/
void vidPingPong(void)
{
	while(1){
	for(LED_u8Iteration=0;LED_u8Iteration<8;LED_u8Iteration+=3)
				{

		DIO_vidSetPortValue(PORTA,(128>>LED_u8Iteration));
		//_delay_ms(250);
        for(int i=0; i<25000; i++);

				}


	DIO_vidSetPortValue(PORTA,(128>>3));
			//_delay_ms(250);
        for(int i=0; i<25000; i++);
        
        


	}
}
/********************************************************************************************************/
/*7*/
/*Incrementing-Snake effect*/
void vidSnakeEffect(void)
{
	while(1){
	for(LED_u8Iteration=0;LED_u8Iteration<8;LED_u8Iteration++)
				{

		DIO_vidSetPinValue(PORTA,LED_u8Iteration,HIGH);
		//_delay_ms(250);
                    for(int i=0; i<25000; i++);

				}
	}
}
/****************************************************************************************************/
/*8*/
/*2Leds converging then diverging*/
void vid2LedConvAndDiv(void)
{
	while(1){
		for(LED_u8Iteration=0;LED_u8Iteration<4;LED_u8Iteration++)
			{
			DIO_vidSetPortValue(PORTA,Led_u8Arr2Led[LED_u8Iteration]);
				//_delay_ms(500);
                for(int i=0; i<25000; i++);
                for(int i=0; i<25000; i++);
			}
		for(LED_u8Iteration=3;LED_u8Iteration>1;LED_u8Iteration--)
			{
			DIO_vidSetPortValue(PORTA,Led_u8Arr2Led[LED_u8Iteration-1]);
				//_delay_ms(500);
                for(int i=0; i<25000; i++);
                for(int i=0; i<25000; i++);
			}

	}
}
