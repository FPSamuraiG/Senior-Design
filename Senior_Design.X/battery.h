/* 
 * File:   battery.h
 * Author: chris
 *
 * Created on February 9, 2022, 1:07 PM
 */

#ifndef BATTERY_H
#define	BATTERY_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "mcc_generated_files/mcc.h"
    
    //Function definitions here
    int get_SOC(void);

#ifdef	__cplusplus
}
#endif

#endif	/* BATTERY_H */

