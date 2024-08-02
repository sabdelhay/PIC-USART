/*
 * File:   main.c
 * Author: sherif
 *
 * Created on July 24, 2024, 4:38 PM
 */

#include <xc.h>
#define _XTAL_FREQ 4000000
#include "config.h"
#include "usart.h"
#include "lcd.h"

void main(void) {
    TRISC6 = 0;
    TRISC7 = 1;
    
    LCD_init();
    UART_init();
   
    char received;
    
    LCD_clearScreen();
    // LCD_sendString("hello world");
   while(1){
        received = UART_receive();
        LCD_sendChar(received);
    }
}
