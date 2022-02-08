/*
 * Led_interface.h
 *
 *  Created on: Aug 28, 2019
 *      Author: Mariam
 */

#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

#endif /* LED_INTERFACE_H_ */

/*leds different animation*/
/*1*/
/*Flashing every 500 ms*/
void vidLEDFlashing (void);
/*2*/
/*Shifting Left every 250 ms*/
void vidShiftLeft(void);
/*3*/
/*Shifting Right every 250 ms*/
void vidShiftRight(void);
/*4*/
/*2 LEDs converging every 300 ms*/
void vidConv2Leds(void);
/*5*/
/*2 LEDs diverging every 300 ms*/
void vidDiv2Leds(void);
/*6*/
/*Ping Pong effect*/
void vidPingPong(void);
/*7*/
/*Incrementing-Snake effect*/
void vidSnakeEffect(void);
/*8*/
/*2Leds converging then diverging*/
void vid2LedConvAndDiv(void);
