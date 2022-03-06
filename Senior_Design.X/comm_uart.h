/* 
 * File:   comm_uart.h
 * Author: Chris
 *
 * Declares user made functions used to send information over the MCU UART Module.
 */

#ifndef COMM_UART_H
#define	COMM_UART_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <string.h>
#include "mcc_generated_files/mcc.h"
    
    void uart_send_string(char* msg);
    
#ifdef	__cplusplus
}
#endif

#endif	/* COMM_UART_H */

