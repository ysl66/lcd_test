/*
 * File:   newmain1.c
 * Author: EE475
 *
 * Created on November 2, 2017, 8:31 PM
 */


#include <xc.h>
#include "mcc_generated_files/mcc.h"
#include "lcd_new.h"

void main (void) {
    SYSTEM_Initialize();
    
    lcd_init();
    __delay_ms(1000);
    char* hi = "Hello\n";
    
    sendString(hi);
    while(1) {
        
    }
    return;
}
