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
        Device            :  PIC18F16Q41
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

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSELB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RB5 procedures
#define RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()              PORTBbits.RB5
#define RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()             do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()           do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetAnalogMode()         do { ANSELBbits.ANSELB5 = 1; } while(0)
#define RB5_SetDigitalMode()        do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set RB6 procedures
#define RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define RB6_GetValue()              PORTBbits.RB6
#define RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define RB6_SetPullup()             do { WPUBbits.WPUB6 = 1; } while(0)
#define RB6_ResetPullup()           do { WPUBbits.WPUB6 = 0; } while(0)
#define RB6_SetAnalogMode()         do { ANSELBbits.ANSELB6 = 1; } while(0)
#define RB6_SetDigitalMode()        do { ANSELBbits.ANSELB6 = 0; } while(0)

// get/set RB7 procedures
#define RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define RB7_GetValue()              PORTBbits.RB7
#define RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define RB7_SetPullup()             do { WPUBbits.WPUB7 = 1; } while(0)
#define RB7_ResetPullup()           do { WPUBbits.WPUB7 = 0; } while(0)
#define RB7_SetAnalogMode()         do { ANSELBbits.ANSELB7 = 1; } while(0)
#define RB7_SetDigitalMode()        do { ANSELBbits.ANSELB7 = 0; } while(0)

// get/set btn aliases
#define btn_TRIS                 TRISCbits.TRISC0
#define btn_LAT                  LATCbits.LATC0
#define btn_PORT                 PORTCbits.RC0
#define btn_WPU                  WPUCbits.WPUC0
#define btn_OD                   ODCONCbits.ODCC0
#define btn_ANS                  ANSELCbits.ANSELC0
#define btn_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define btn_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define btn_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define btn_GetValue()           PORTCbits.RC0
#define btn_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define btn_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define btn_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define btn_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define btn_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define btn_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define btn_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define btn_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set led aliases
#define led_TRIS                 TRISCbits.TRISC1
#define led_LAT                  LATCbits.LATC1
#define led_PORT                 PORTCbits.RC1
#define led_WPU                  WPUCbits.WPUC1
#define led_OD                   ODCONCbits.ODCC1
#define led_ANS                  ANSELCbits.ANSELC1
#define led_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define led_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define led_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define led_GetValue()           PORTCbits.RC1
#define led_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define led_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define led_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define led_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define led_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define led_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define led_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define led_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set sleep_sw aliases
#define sleep_sw_TRIS                 TRISCbits.TRISC7
#define sleep_sw_LAT                  LATCbits.LATC7
#define sleep_sw_PORT                 PORTCbits.RC7
#define sleep_sw_WPU                  WPUCbits.WPUC7
#define sleep_sw_OD                   ODCONCbits.ODCC7
#define sleep_sw_ANS                  ANSELCbits.ANSELC7
#define sleep_sw_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define sleep_sw_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define sleep_sw_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define sleep_sw_GetValue()           PORTCbits.RC7
#define sleep_sw_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define sleep_sw_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define sleep_sw_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define sleep_sw_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define sleep_sw_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define sleep_sw_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define sleep_sw_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define sleep_sw_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

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


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF0 pin functionality
 * @Example
    IOCCF0_ISR();
 */
void IOCCF0_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF0 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF0 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF0_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF0_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF0 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF0_SetInterruptHandler() method.
    This handler is called every time the IOCCF0 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF0_SetInterruptHandler(IOCCF0_InterruptHandler);

*/
extern void (*IOCCF0_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF0 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF0_SetInterruptHandler() method.
    This handler is called every time the IOCCF0 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF0_SetInterruptHandler(IOCCF0_DefaultInterruptHandler);

*/
void IOCCF0_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/