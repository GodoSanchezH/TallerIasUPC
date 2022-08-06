/**
  Generated Interrupt Manager Source File

  @Company:
    Microchip Technology Inc.

  @File Name:
    interrupt_manager.c

  @Summary:
    This is the Interrupt Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description:
    This header file provides implementations for global interrupt handling.
    For individual peripheral handlers please see the peripheral driver for
    all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC18F57Q43
        Driver Version    :  2.04
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above or later
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

#include "interrupt_manager.h"
#include "mcc.h"
#include <stdio.h>
#include <stdlib.h>

void  INTERRUPT_Initialize (void)
{
    // Disable Interrupt Priority Vectors (16CXXX Compatibility Mode)
    INTCON0bits.IPEN = 0;
}
volatile char dato_Rx;
char buffer_rx[100];
uint16_t i,duty_cicle;
void __interrupt() INTERRUPT_InterruptManager (void)
{
    // interrupt handler
    if(PIE4bits.U1RXIE == 1 && PIR4bits.U1RXIF == 1)
    {
        UART1_RxInterruptHandler();
        dato_Rx = U1RXB;
        
        if (dato_Rx == 'a') {
            led2_SetHigh();
        }else if(dato_Rx == 'b'){
        led2_SetLow();
        }else if(dato_Rx == 'c'){
        led_SetHigh();
        }else if(dato_Rx == 'd'){
        led_SetLow();
        }else if(dato_Rx == 'x'){
            duty_cicle = atof(buffer_rx);
            PWM1_LoadDutyValue(duty_cicle);
            i=0;
        }else{
        
            buffer_rx[i] = dato_Rx;
            i++;
        
        }

        
        
    }
    else
    {
        //Unhandled Interrupt
    }
}
/**
 End of File
*/
