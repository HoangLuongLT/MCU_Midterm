/*
 * software_timer.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Luong
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0_flag;

void setTimer0(int duration);

void runTimer0();

extern int timer1_flag;

void setTimer1(int duration);

void runTimer1();

extern int timer2_flag;

void setTimer2(int duration);

void runTimer2();

extern int timer3_flag;

void setTimer3(int duration);

void runTimer3();

extern int timer4_flag;

void setTimer4(int duration);

void runTimer4();

#endif /* INC_SOFTWARE_TIMER_H_ */
