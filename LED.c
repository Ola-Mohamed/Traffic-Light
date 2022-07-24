 /******************************************************************************
 *
 * Module: LED
 *
 * File Name: LED.c
 *
 * Author: Ola Mohamed Ahmed
 *
 *******************************************************************************/
#include"LED.h"


/**************************Functions*********************************/

void ledInit(uint8  portName  ,uint8 pinNum ){

	DioSetPINDir(portName , pinNum , 1);  //Set the given pin in the given port as an output
}


void ledOn(uint8  portName  ,uint8 pinNum){

	DioWrite( portName,  pinNum , 1); //Set the given pin in the given port to one(on)
}

void ledOff(uint8  portName  ,uint8 pinNum){

	DioWrite( portName,  pinNum , 0); //Set the given pin in the given port to zero(off)
}

void ledToggle(uint8  portName  ,uint8 pinNum){

	DioToggle(portName, pinNum);//Set the given pin in the given port to zero if it is one or set it to one if it is zero


}
