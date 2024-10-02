/*
 * timer.c
 *
 *  Created on: Sep 20, 2024
 *      Author: MY LE
 */
#include "timer.h"
#define TICK 10

int timer1_counter = 0;
int timer1_flag = 0;

int timer2_counter = 0;
int timer2_flag = 0;

int timer3_counter = 0;
int timer3_flag = 0;

void setTimer1(int duration)
{
	timer1_counter = duration/TICK;
	timer1_flag = 0;
}

void setTimer2(int duration)
{
	timer2_counter = duration/TICK;
	timer2_flag = 0;
}

void setTimer3(int duration)
{
	timer3_counter = duration/TICK;
	timer3_flag = 0;
}

void timerRun()
{
	if(timer1_counter > 0)
	{
		timer1_counter --;
	}
	if(timer1_counter <= 0)
	{
		timer1_flag = 1;
	}

	if(timer2_counter > 0)
		{
			timer2_counter --;
		}
		if(timer2_counter <= 0)
		{
			timer2_flag = 1;
		}

	if(timer3_counter > 0)
			{
				timer3_counter --;
			}
			if(timer3_counter <= 0)
			{
				timer3_flag = 1;
			}
}

void display7SEG(int num)
{
	if (num == 0)
	{
		 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
	}
	if (num == 1)
	{
		 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
		 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
		 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
	}
	if (num == 2)
	{
		 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
		 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
	}
	if (num == 3)
	{
		 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);

	}
	if (num == 4)
	{
		 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
		 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
		 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
	}
	if (num == 5)
	{
		 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
		 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
	}
	if (num == 6)
	{
		 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
		 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
	}
	if (num == 7)
	{
		 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
		 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
	}
	if (num == 8)
	{
		 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
	}
	if (num == 9)
	{
		 HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		 HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		 HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
	}
}

void update7SEG(int index)
{
	switch(index)
	{
		case 0:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			display7SEG(led_buffer[index]);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			display7SEG(led_buffer[index]);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			display7SEG(led_buffer[index]);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG(led_buffer[index]);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
			break;
		default:
			break;
	}
}
