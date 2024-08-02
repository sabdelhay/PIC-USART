#include <xc.h>
#define _XTAL_FREQ 4000000
#include "config.h"
#include "std_macros.h"

void UART_init(void){
    
    TXSTA=0x24; //BRGH=1, TXEN = 1, Asynchronous Mode, 8-bit mode
    RCSTA=0b10010000; //Serial Port enabled,8-bit reception
    SPBRG=25;           //9600 baudrate for 4Mhz
    TXIF=RCIF=0;
}

void UART_send_data(char data){
    
    while(!TXIF);
    TXREG = data;
    TXIF = 0;
}

char UART_receive(){

    while(!RCIF);
    RCIF=0;
    return RCREG;
}

void UART_sendString(char *ptr){
    while(*ptr){
        UART_send_data(*ptr);
        ptr++;
       __delay_ms(100);
    }
}
