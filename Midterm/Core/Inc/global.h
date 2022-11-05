/*
 * global.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Luong
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "output_display.h"

#define RESET 1
#define INC_NORMAL 2
#define DEC_NORMAL 3

extern int status;

extern int numberCounter;

extern int led;

#define MAN_RED		12
#define MAN_GREEN	13
#define MAN_YELLOW 	14

#endif /* INC_GLOBAL_H_ */
