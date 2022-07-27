 /******************************************************************************
 *
 * Module: Timer
 *
 * File Name: Timer.h
 *
 * Author: Ola Mohamed Ahmed
 *
 *******************************************************************************/
#ifndef TIMER_H_
#define TIMER_H_

/*********************************************************************************
 *                              INCLUDES
 *******************************************************************************/
#include "std_types.h"
#include "common_macros.h"
#include "micro_config.h"


#define NULL_PTR 0
/*********************************************************************************
 *                              ENUMS
 *******************************************************************************/
typedef enum
{
	NO_CLOCK,F_CPU_CLOCK,F_CPU_8,F_CPU_64,F_CPU_256,F_CPU_1024
}TIMER1_Clock;

typedef enum
{
	OVERFLOW , COMPARE_A , COMPARE_B , PWM
}TIMER1_Mode;

/*********************************************************************************
 *                              STRUCTURES
 *******************************************************************************/
typedef struct{
	TIMER1_Mode mode;
	uint8 initialValue ;
	uint8 compareValueA;
	uint8 compareValueB;
	uint8 dutyCycle ;
	TIMER1_Clock clock;

}Timer1_ConfigType;

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/


void Timer1Init(const Timer1_ConfigType * Config_Ptr);

void Timer1DeInit(void);

void Timer1OVFsetCallBack(void(*a_ptr)(void));

void Timer1CMPAsetCallBack(void(*a_ptr)(void));

void Timer1CMPBsetCallBack(void(*a_ptr)(void));


#endif /* TIMER_H_ */
