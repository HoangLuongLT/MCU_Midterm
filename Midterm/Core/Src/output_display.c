/*
 * output_display.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Luong
 */

#include "main.h"
#include <output_display.h>
#include <software_timer.h>


void funcBlinkRed(){
	 if(timer0_flag==1){
		 HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
		 setTimer0(1000);
	 }
}

void display7SEG(unsigned int number){
	uint8_t led7SegHex[10]={0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x10};
	GPIOB->ODR &= 0xff80;
	GPIOB->ODR|= led7SegHex[number];
}
