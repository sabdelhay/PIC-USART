/* 
 * File:   lcd.h
 * Author: sherif
 *
 * Created on July 25, 2024, 12:00 PM
 */

#ifndef LCD_H
#define	LCD_H

#ifdef	__cplusplus
extern "C" {
#endif

#define CLR_Screen				0x01
#define RETURN_HOME				0x02
#define CURSOR_ON_DISPLAN_ON	0x0E
#define ENTRY_MODE				0x06

#define FOUR_BITS 0x28
#define EN 0
#define RS 1
#define RW 2
/*#define EIGHT_BITS 0x38*/

void LCD_init(void);
void enable(void);
void LCD_sendCommand(char cmd);
void LCD_sendChar(char data);
void LCD_clearScreen();
void LCD_sendString(char *ptr);
void LCD_moveCursor(char row, char col);


#ifdef	__cplusplus
}
#endif

#endif	/* LCD_H */

