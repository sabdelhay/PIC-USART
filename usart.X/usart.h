/* 
 * File:   usart.h
 * Author: sherif
 *
 * Created on July 25, 2024, 5:45 PM
 */

#ifndef USART_H
#define	USART_H

#ifdef	__cplusplus
extern "C" {
#endif
void UART_init(void);
void UART_send_data(char data);
char UART_receive();
void UART_sendString(char *ptr);

#ifdef	__cplusplus
}
#endif

#endif	/* USART_H */

