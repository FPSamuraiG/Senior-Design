/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC18F16Q41
        Driver Version    :  2.00
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

#include <stdio.h>
#include "mcc_generated_files/mcc.h"
#include "comm_uart.h"
#include "sleep.h"
#include "battery.h"

/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    TMR0_StopTimer();
    sleep_setup();
    IOCAF2_SetInterruptHandler(btn_interrupt);
    TMR0_SetInterruptHandler(tmr_interrupt);
    INTERRUPT_GlobalInterruptEnable();
    
    //Startup procedure
    __delay_ms(100);
    uart_send_string("\nUnderwater Input Platform\r\n");
    uart_send_string("Version 0.20\t(3/6/2022)\r\n\n");
    
    int SOC; //Battery charge level;
    
    int start_btn_state; //State of pushbutton at start of loop, used to see if
                         //the button changed states during loop execution
    int last_btn_state_sent = 1;  //State of button when a message was last sent, used to
                             //avoid sending consecutive button states in situations
                             //like button bouncing.
    int btn_position = 0;
    
    char batt_msg[7]; //Battery message
    char btn_msg[7];  //Button message
    while (1)
    {
        //Save state of pushbutton at loop start
        __delay_ms(1);
        start_btn_state = btn_state;
        
        //Check if button is in same state after a delay to debounce
        __delay_ms(50);
        if(btn_state == start_btn_state) {
            input_handled = 1;
            
            //Don't send a new message if the button didn't change states from 
            //the last message sent (allow this behavior if the button is 
            //released to not miss a release message during erratic behavior)
            if (start_btn_state != last_btn_state_sent) {
                if (start_btn_state == 0) btn_position = 1;
                else btn_position = 0;

                snprintf(btn_msg, sizeof(btn_msg), "BTN0%i\r", btn_position);
                uart_send_string(btn_msg);
                last_btn_state_sent = start_btn_state;

                //Get battery charge level
                SOC = get_SOC();

                //Construct battery status message
                if (SOC >= 0 && SOC < 10) snprintf(batt_msg, sizeof(batt_msg), "BAT0%i\r", SOC);
                else if (SOC >= 10 && SOC < 100) snprintf(batt_msg, sizeof(batt_msg), "BAT%i\r", SOC);
                else if (SOC == 100) snprintf(batt_msg, sizeof(batt_msg), "BAT00\r");
                else snprintf(batt_msg, sizeof(batt_msg), "BATER\r"); //Battery error

                //Only send battery level when button is pressed
                if(btn_position == 1) uart_send_string(batt_msg);
            }
        }
        
        //Only go to sleep if another interrupt didn't occur during the loop
        if(input_handled == 1) {
            if(last_btn_state_sent == 0) TMR0_StartTimer(); //start timer if button was pressed
            sleep_enter();
        }
    }
}
/**
 End of File
*/