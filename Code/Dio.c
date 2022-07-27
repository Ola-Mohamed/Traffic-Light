 /******************************************************************************
 *
 * Module: Dio
 *
 * File Name: Dio.c
 *
 * Author: Ola Mohamed Ahmed
 *
 *******************************************************************************/
#include "Dio.h"

/**************************Functions*********************************/

void DioSetPINDir(uint8 portName  ,uint8 pinNum ,uint8 direction){
switch(portName){

  case'A':
	  if(direction == 1)
		  SET_BIT(DDRA,pinNum); //Set the direction of the given pin in port A as output
	  else{
		  CLEAR_BIT(DDRA,pinNum); //Set the direction of the given pin in port A as input
	     }
	break;

  case'B':
	  if(direction == 1)
		  SET_BIT(DDRB,pinNum);
	  else{
		  CLEAR_BIT(DDRB,pinNum);
	     }
	break;

  case'C':
	  if(direction == 1)
		  SET_BIT(DDRC,pinNum);
	  else{
		  CLEAR_BIT(DDRC,pinNum);
	     }
	break;

  case'D':
	  if(direction == 1)
		  SET_BIT(DDRD,pinNum);
	  else{
		  CLEAR_BIT(DDRD,pinNum);
	     }
	break;

  default:
    break;

 }
}

void DioWrite(uint8  portName,uint8  pinNum ,uint8  outputvalue)
{
	switch(portName)
	{
		case 'A' :

		if(outputvalue==1)

			SET_BIT(PORTA,pinNum);//Set the value of the given pin in port A as High

		else
		{
			CLR_BIT(PORTA,pinNum);//Set the value of the given pin in port A as Low
		}
		break ;
		case 'B':

		if(outputvalue==1)

			SET_BIT(PORTB,pinNum);//Set the value of the given pin in port B as High

		else
		{
			CLR_BIT(PORTB,pinNum);//Set the value of the given pin in port B as Low
		}
		break ;
		case 'C' :

		if(outputvalue==1)

			SET_BIT(PORTC,pinNum);//Set the value of the given pin in port C as High

		else
		{
			CLR_BIT(PORTC,pinNum);//Set the value of the given pin in port C as Low
		}
		break ;
		case 'D':

		if(outputvalue==1)

			SET_BIT(PORTD,pinNum);//Set the value of the given pin in port D as High

		else
		{
			CLR_BIT(PORTD,pinNum);//Set the value of the given pin in port D as Low
		}
		break ;
		default: break ;
	}
}


uint8 Dioread(uint8 portName,uint8 pinNum){

	uint8 return_value=0;
	switch(portName)
	{
		case 'A' :
		return_value=READ_BIT(PINA,pinNum);//Read the value from the given pin in port A
		break;

		case 'B' :
		return_value=READ_BIT(PINB,pinNum);//Read the value from the given pin in port B
		break;

		case 'C' :
		return_value=READ_BIT(PINC,pinNum);//Read the value from the given pin in port C
		break;

		case 'D' :
		return_value=READ_BIT(PIND,pinNum);//Read the value from the given pin in port D
		break;
		default:
		break;

	}
	return  return_value;
}

void DioToggle(uint8 portName,uint8 pinNum)
{
	switch(portName)
	{
		case 'A':
		TOG_BIT(PORTA,pinNum);//Toggle the value of the given pin in port A
		break;
		case 'B':
		TOG_BIT(PORTB,pinNum);//Toggle the value of the given pin in port B
		break;
		case 'C':
		TOG_BIT(PORTC,pinNum);//Toggle the value of the given pin in port C
		break;
		case 'D':
		TOG_BIT(PORTD,pinNum);//Toggle the value of the given pin in port D
		break;
		default: break;
	}
}
