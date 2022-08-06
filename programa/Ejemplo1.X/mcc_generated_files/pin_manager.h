/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC18F57Q43
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set boton aliases
#define boton_TRIS                 TRISBbits.TRISB4
#define boton_LAT                  LATBbits.LATB4
#define boton_PORT                 PORTBbits.RB4
#define boton_WPU                  WPUBbits.WPUB4
#define boton_OD                   ODCONBbits.ODCB4
#define boton_ANS                  ANSELBbits.ANSELB4
#define boton_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define boton_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define boton_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define boton_GetValue()           PORTBbits.RB4
#define boton_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define boton_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define boton_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define boton_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define boton_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define boton_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define boton_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define boton_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set Potenciometro aliases
#define Potenciometro_TRIS                 TRISEbits.TRISE2
#define Potenciometro_LAT                  LATEbits.LATE2
#define Potenciometro_PORT                 PORTEbits.RE2
#define Potenciometro_WPU                  WPUEbits.WPUE2
#define Potenciometro_OD                   ODCONEbits.ODCE2
#define Potenciometro_ANS                  ANSELEbits.ANSELE2
#define Potenciometro_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define Potenciometro_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define Potenciometro_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define Potenciometro_GetValue()           PORTEbits.RE2
#define Potenciometro_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define Potenciometro_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define Potenciometro_SetPullup()          do { WPUEbits.WPUE2 = 1; } while(0)
#define Potenciometro_ResetPullup()        do { WPUEbits.WPUE2 = 0; } while(0)
#define Potenciometro_SetPushPull()        do { ODCONEbits.ODCE2 = 0; } while(0)
#define Potenciometro_SetOpenDrain()       do { ODCONEbits.ODCE2 = 1; } while(0)
#define Potenciometro_SetAnalogMode()      do { ANSELEbits.ANSELE2 = 1; } while(0)
#define Potenciometro_SetDigitalMode()     do { ANSELEbits.ANSELE2 = 0; } while(0)

// get/set RF0 procedures
#define RF0_SetHigh()            do { LATFbits.LATF0 = 1; } while(0)
#define RF0_SetLow()             do { LATFbits.LATF0 = 0; } while(0)
#define RF0_Toggle()             do { LATFbits.LATF0 = ~LATFbits.LATF0; } while(0)
#define RF0_GetValue()              PORTFbits.RF0
#define RF0_SetDigitalInput()    do { TRISFbits.TRISF0 = 1; } while(0)
#define RF0_SetDigitalOutput()   do { TRISFbits.TRISF0 = 0; } while(0)
#define RF0_SetPullup()             do { WPUFbits.WPUF0 = 1; } while(0)
#define RF0_ResetPullup()           do { WPUFbits.WPUF0 = 0; } while(0)
#define RF0_SetAnalogMode()         do { ANSELFbits.ANSELF0 = 1; } while(0)
#define RF0_SetDigitalMode()        do { ANSELFbits.ANSELF0 = 0; } while(0)

// get/set RF1 procedures
#define RF1_SetHigh()            do { LATFbits.LATF1 = 1; } while(0)
#define RF1_SetLow()             do { LATFbits.LATF1 = 0; } while(0)
#define RF1_Toggle()             do { LATFbits.LATF1 = ~LATFbits.LATF1; } while(0)
#define RF1_GetValue()              PORTFbits.RF1
#define RF1_SetDigitalInput()    do { TRISFbits.TRISF1 = 1; } while(0)
#define RF1_SetDigitalOutput()   do { TRISFbits.TRISF1 = 0; } while(0)
#define RF1_SetPullup()             do { WPUFbits.WPUF1 = 1; } while(0)
#define RF1_ResetPullup()           do { WPUFbits.WPUF1 = 0; } while(0)
#define RF1_SetAnalogMode()         do { ANSELFbits.ANSELF1 = 1; } while(0)
#define RF1_SetDigitalMode()        do { ANSELFbits.ANSELF1 = 0; } while(0)

// get/set led2 aliases
#define led2_TRIS                 TRISFbits.TRISF2
#define led2_LAT                  LATFbits.LATF2
#define led2_PORT                 PORTFbits.RF2
#define led2_WPU                  WPUFbits.WPUF2
#define led2_OD                   ODCONFbits.ODCF2
#define led2_ANS                  ANSELFbits.ANSELF2
#define led2_SetHigh()            do { LATFbits.LATF2 = 1; } while(0)
#define led2_SetLow()             do { LATFbits.LATF2 = 0; } while(0)
#define led2_Toggle()             do { LATFbits.LATF2 = ~LATFbits.LATF2; } while(0)
#define led2_GetValue()           PORTFbits.RF2
#define led2_SetDigitalInput()    do { TRISFbits.TRISF2 = 1; } while(0)
#define led2_SetDigitalOutput()   do { TRISFbits.TRISF2 = 0; } while(0)
#define led2_SetPullup()          do { WPUFbits.WPUF2 = 1; } while(0)
#define led2_ResetPullup()        do { WPUFbits.WPUF2 = 0; } while(0)
#define led2_SetPushPull()        do { ODCONFbits.ODCF2 = 0; } while(0)
#define led2_SetOpenDrain()       do { ODCONFbits.ODCF2 = 1; } while(0)
#define led2_SetAnalogMode()      do { ANSELFbits.ANSELF2 = 1; } while(0)
#define led2_SetDigitalMode()     do { ANSELFbits.ANSELF2 = 0; } while(0)

// get/set led aliases
#define led_TRIS                 TRISFbits.TRISF3
#define led_LAT                  LATFbits.LATF3
#define led_PORT                 PORTFbits.RF3
#define led_WPU                  WPUFbits.WPUF3
#define led_OD                   ODCONFbits.ODCF3
#define led_ANS                  ANSELFbits.ANSELF3
#define led_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define led_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define led_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define led_GetValue()           PORTFbits.RF3
#define led_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define led_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define led_SetPullup()          do { WPUFbits.WPUF3 = 1; } while(0)
#define led_ResetPullup()        do { WPUFbits.WPUF3 = 0; } while(0)
#define led_SetPushPull()        do { ODCONFbits.ODCF3 = 0; } while(0)
#define led_SetOpenDrain()       do { ODCONFbits.ODCF3 = 1; } while(0)
#define led_SetAnalogMode()      do { ANSELFbits.ANSELF3 = 1; } while(0)
#define led_SetDigitalMode()     do { ANSELFbits.ANSELF3 = 0; } while(0)

// get/set RF7 procedures
#define RF7_SetHigh()            do { LATFbits.LATF7 = 1; } while(0)
#define RF7_SetLow()             do { LATFbits.LATF7 = 0; } while(0)
#define RF7_Toggle()             do { LATFbits.LATF7 = ~LATFbits.LATF7; } while(0)
#define RF7_GetValue()              PORTFbits.RF7
#define RF7_SetDigitalInput()    do { TRISFbits.TRISF7 = 1; } while(0)
#define RF7_SetDigitalOutput()   do { TRISFbits.TRISF7 = 0; } while(0)
#define RF7_SetPullup()             do { WPUFbits.WPUF7 = 1; } while(0)
#define RF7_ResetPullup()           do { WPUFbits.WPUF7 = 0; } while(0)
#define RF7_SetAnalogMode()         do { ANSELFbits.ANSELF7 = 1; } while(0)
#define RF7_SetDigitalMode()        do { ANSELFbits.ANSELF7 = 0; } while(0)

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