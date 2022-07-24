 /******************************************************************************
 *
 * Module: Dio
 *
 * File Name: Dio.h
 *
 * Author: Ola Mohamed Ahmed
 *
 *******************************************************************************/

#ifndef DIO_H_
#define DIO_H_


#include"common_macros.h"
#include"std_types.h"
#include"micro_config.h"

/*************************Defines**************************************/
#define PortA A
#define PortB B
#define PortC C
#define PortD D
/*************************************************************************/

void DioSetPINDir(uint8 portName  ,uint8 pinNum ,uint8 direction);


void DioWrite(uint8  portName,uint8  pinNum ,uint8  outputvalue);


uint8 Dioread(uint8 portName,uint8 pinNum);

void DioToggle(uint8 portName,uint8 pinNum);



#endif /* DIO_H_ */
