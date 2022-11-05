/*
 * input_reading.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Luong
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

extern int button1_flag[3];

void getKeyInput();

int isButtonPress(int i);

#endif /* INC_BUTTON_H_ */
