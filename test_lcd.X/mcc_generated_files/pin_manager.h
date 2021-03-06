/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.26
        Device            :  PIC18F25K22
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LCD_EN aliases
#define LCD_EN_TRIS               TRISAbits.TRISA1
#define LCD_EN_LAT                LATAbits.LATA1
#define LCD_EN_PORT               PORTAbits.RA1
#define LCD_EN_ANS                ANSELAbits.ANSA1
#define LCD_EN_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LCD_EN_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LCD_EN_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LCD_EN_GetValue()           PORTAbits.RA1
#define LCD_EN_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LCD_EN_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LCD_EN_SetAnalogMode()  do { ANSELAbits.ANSA1 = 1; } while(0)
#define LCD_EN_SetDigitalMode() do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LCD_CLK aliases
#define LCD_CLK_TRIS               TRISBbits.TRISB0
#define LCD_CLK_LAT                LATBbits.LATB0
#define LCD_CLK_PORT               PORTBbits.RB0
#define LCD_CLK_WPU                WPUBbits.WPUB0
#define LCD_CLK_ANS                ANSELBbits.ANSB0
#define LCD_CLK_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define LCD_CLK_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define LCD_CLK_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define LCD_CLK_GetValue()           PORTBbits.RB0
#define LCD_CLK_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define LCD_CLK_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define LCD_CLK_SetPullup()      do { WPUBbits.WPUB0 = 1; } while(0)
#define LCD_CLK_ResetPullup()    do { WPUBbits.WPUB0 = 0; } while(0)
#define LCD_CLK_SetAnalogMode()  do { ANSELBbits.ANSB0 = 1; } while(0)
#define LCD_CLK_SetDigitalMode() do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set LCD_SER aliases
#define LCD_SER_TRIS               TRISBbits.TRISB5
#define LCD_SER_LAT                LATBbits.LATB5
#define LCD_SER_PORT               PORTBbits.RB5
#define LCD_SER_WPU                WPUBbits.WPUB5
#define LCD_SER_ANS                ANSELBbits.ANSB5
#define LCD_SER_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define LCD_SER_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define LCD_SER_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define LCD_SER_GetValue()           PORTBbits.RB5
#define LCD_SER_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define LCD_SER_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define LCD_SER_SetPullup()      do { WPUBbits.WPUB5 = 1; } while(0)
#define LCD_SER_ResetPullup()    do { WPUBbits.WPUB5 = 0; } while(0)
#define LCD_SER_SetAnalogMode()  do { ANSELBbits.ANSB5 = 1; } while(0)
#define LCD_SER_SetDigitalMode() do { ANSELBbits.ANSB5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/