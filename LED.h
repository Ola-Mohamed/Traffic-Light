 /******************************************************************************
 *
 * Module: LED
 *
 * File Name: LED.h
 *
 * Author: Ola Mohamed Ahmed
 *
 *******************************************************************************/

#ifndef LED_H_
#define LED_H_




void ledInit(uint8  portName  ,uint8 pinNum );

void ledOn(uint8  portName  ,uint8 pinNum);

void ledOff(uint8  portName  ,uint8 pinNum);

void ledToggle(uint8  portName  ,uint8 pinNum);




#endif /* LED_H_ */
