///*
// * run_ex.c
// *
// *  Created on: Sep 27, 2024
// *      Author: MY LE
// */
//#include "run_ex.h"
//
//
//void run_ex(int num)
//{
////	if (num == 1)
////	{
////		ex1();
////	}
//	if (num == 2)
//	{
//		ex2();
//	}
//}
//
//void ex1();
//
//
//void ex2()
//{
//
////	int state = 0;
//
//	  if (timer1_flag == 1)
//	  	  {
//	  		  setTimer1(500);
//	  		  switch (state)
//	  		  {
//	  		  	  case 0:
//	  		  		  display7SEG(1);
//	  		  		  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
//	  		  		  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
//	  		  		  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
//	  		  		  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
//	  		  		  state = 1;
//	  			  break;
//
//	  		  	  case 1:
//	  		  		  display7SEG(2);
//	  		  		  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
//	  		  		  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
//	  		  		  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
//	  		  		  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
//	  		  		  state = 2;
//	  		  	  break;
//
//	  		  	  case 2:
//	  		  		  display7SEG(3);
//	  		  		  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
//	  		  		  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
//	  		  		  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
//	  		  		  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
//	  		  		  state = 3;
//	  		  	  break;
//
//	  		  	  case 3:
//	  		  		  display7SEG(0);
//	  		  		  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
//	  		  		  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
//	  		  		  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
//	  		  		  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
//	  		  		  state = 0;
//	  		  	  break;
//
//	  		  	  default:
//	  		  	  break;
//	  		  }
//	  	  }
//
//	  	  if (timer2_flag == 1)
//	  	  {
//	  		  setTimer2(1000);
//	  		  HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);
//	  	  }
//}
