/* 
 * File:   comm_uart.h
 * Author: Chris
 *
 * Contains user made functions used to send information over the MCU UART Module.
 */

#include "comm_uart.h"

void uart_send_string(char* msg) {
    for (int i = 0; i < strlen(msg); i++){
        UART1_Write(msg[i]);
    }
}

void uart_btn_msg(void) {
    //__delay_ms(10);
    uart_send_string("BTN1\r\n");
}