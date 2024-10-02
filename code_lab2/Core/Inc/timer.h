/*
 * timer.h
 *
 *  Created on: Sep 20, 2024
 *      Author: MY LE
 */
#include "main.h"

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;

#define MAX_LED 4
extern int index_led;
extern int led_buffer[MAX_LED];

void update7SEG(int index);

void display7SEG(int num);
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void timerRun();

#endif /* INC_TIMER_H_ */
