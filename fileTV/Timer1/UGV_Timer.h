/********************************************************************************
 *               		                                                            *
 *  Project    		UGV_ARM							                                          *
 *	File      		UGV_Timer.h     	   		                                      *
 * 	Author	    	Le Phuc Cong Thanh		                                        *
 *  Created on: 	Feb 26, 2021	                                                *
 *  Version 			V1.0	                                                       	*
 *                                                                   		        *
 ********************************************************************************/
#ifndef UGV_Timer_H
#define UGV_Timer_H

#include "stdint.h"
#include "math.h"
#include "stdlib.h"

/******************************************************************************
 *                                                                            *
 *  												DEFINE  	                                        *
 *  														                                              *
 ******************************************************************************/

/******************************************************************************
 *                                                                            *
 *  												TYPEDEFINE                                        *
 *  														                                              *
 ******************************************************************************/
 
/******************************************************************************
 *                                                                            *
 *  												FUNCTION	                                        *
 *  														                                              *
 ******************************************************************************/
void Timer_Motor(void);
void TIM5_IRQHandler(void);
void Timer_Sample(void);
void TIM6_DAC_IRQHandler();
void Timer_Control(void);
void TIM7_IRQHandler(void);
void delay_01ms(uint16_t period);
void Timer_TransData(void);
#endif 
