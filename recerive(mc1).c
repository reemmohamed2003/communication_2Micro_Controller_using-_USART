/*
 * communicatio 2micro controller.c
 *
 * Created: 9/12/2024 1:19:46 AM
 * Author : Al-Arab
 */ 

#include "USART.h"
#define F_CPU  8000000UL
#include <util/delay.h>



int main(void)
{
    UART_vInit(9600);
	_delay_ms(300);
	UART_vSendstring("Reem Mohamed");
    while (1) 
    {
    }
}

