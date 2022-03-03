/* 
 * File:   comm_uart.h
 * Author: Chris
 *
 * Contains user made functions used to send information over the MCU UART Module.
 */

#include "comm_uart.h"

int interrupt_processing = 0;

void uart_send_string(char* msg) {
    while(UART1_is_tx_done() == 0); //Wait until any previous transmission is finished
    for (int i = 0; i < strlen(msg); i++){
        while(U1FIFObits.TXBF == 1); //Wait until there is room in the buffer
        UART1_Write(msg[i]);
    }
    while(UART1_is_tx_done() == 0); //Wait until this transmission is finished
}

void uart_btn_msg(void) {
    interrupt_processing = 1;
    __delay_ms(1);
    int state = btn_GetValue();
    __delay_ms(1);
    if (btn_GetValue() == state) //Check if the button is still the same state
                                 //after a brief delay to debounce.
    {
        while(UART1_is_tx_done() == 0);
        if (state == LOW) uart_send_string("BTN01\r");
        else uart_send_string("BTN00\r");
    }
    interrupt_processing = 0;
}