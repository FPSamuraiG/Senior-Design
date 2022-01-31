/* 
 * File:   sleep.h
 * Author: Chris
 *
 * Created on January 29, 2022, 2:42 PM
 */

#ifndef SLEEP_H
#define	SLEEP_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "mcc_generated_files/mcc.h"

    void sleep_setup(void);
    void sleep_enter(void);

#ifdef	__cplusplus
}
#endif

#endif	/* SLEEP_H */

