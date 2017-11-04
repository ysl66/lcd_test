/* 
 * File:   lcd_new.h
 * Author: EE475
 *
 * Created on November 2, 2017, 7:15 PM
 */

#ifndef LCD_NEW_H
#define	LCD_NEW_H

#include "mcc_generated_files/mcc.h"
#include <xc.h>

void clockToggle();
void enableToggle();
void sendCommand(unsigned char command);
void lcd_init();
void sendChar(unsigned char letter);
void sendString(char* string);

#endif	/* LCD_NEW_H */

