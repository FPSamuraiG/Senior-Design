/* 
 * File:   battery.h
 * Author: Nathan
 *
 * Created on March 28, 2022, 11:19 AM
 */

#ifndef BATTERY_H
#define	BATTERY_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/examples/i2c1_master_example.h"

        #define request_SOC  0x04 //Fuel Gauge Register to access the 16-bit state of charge (SOC)
        #define  request_Version  0x08 //Fuel Gauge Regiser to access the current version of the fuel gauge
        #define  request_Voltage  0x02 //Fuel gauge register to access the current 12-but A/D measurement of the battery voltage
        #define FG_address  0x36 //The unshifted i2c address for the fuel gauge
        
        //Returns true if device is present
        //Additionally checks the fuel gauge version
        bool isConnected();
        
        // getSOC() - Get the MAX17043's state-of-charge (SOC) reading, as calculated
        // by the IC's "ModelGauge" algorithm.
         // The first update is available approximately 1s after POR of the IC.
        // Output: floating point value between 0-100, representing a percentage of
        // full charge.
        int getsoc();
        
        // getVoltage() - Get the MAX17043's voltage reading.
        // Output: floating point value between 0-5V in 1.25mV increments.
        int getvoltage();
        
#ifdef	__cplusplus
}
#endif

#endif	/* BATTERY_H */

