
#include "battery.h"


int my_round(float number) {
   return (int) (number < 0 ? number - 0.5 : number + 0.5);
}

bool isConnected(){
    uint16_t data = 0x00;
    bool success = false;
    int retries = 3;
    //printf("DummyData : %d\n\r",data);
    while ((success == false)&& retries > 0){
        I2C1_Write2ByteRegister(FG_address,request_Version,data);
        
        data = I2C1_Read2ByteRegister(FG_address,request_Version);
        if(data != 0x00){
            success = true;
            //printf("Current Version: %d\n\r",data);
        }
        else{
            retries--;
            //printf("No response from Fuel Gauge. Retrying...\n\r");
        }
        __delay_ms(50);
    }
    return success;
}


int getsoc(){
    uint16_t data = 0x00;
    float percent;
    int intpercent;
    bool success = false;
    int retries = 3;
    while ((success == false)&& retries > 0){
        I2C1_Write2ByteRegister(FG_address,request_SOC,data);
        
        data = I2C1_Read2ByteRegister(FG_address,request_SOC);
        if(data != 0x00){
            success = true;
            percent = (float)((data & 0xFF00) >> 8);
            percent += ((float)(data & 0x00FF)) / 256.0;
           // printf("SOC: %f\n\r",percent);
            int intpercent = my_round(percent);
            return intpercent;
        }
        else{
            retries--;
            //printf("No response from Fuel Gauge. Retrying...\n\r");
        }
        __delay_ms(50);
    }
    
    return intpercent;
}

int getvoltage(){
     uint16_t data = 0x00;
     float voltage;
     int intvoltage;
    bool success = false;
    int retries = 3;
    while ((success == false)&& retries > 0){
        I2C1_Write2ByteRegister(FG_address,request_Voltage,data);
        
        data = I2C1_Read2ByteRegister(FG_address,request_Voltage);
        if(data != 0x00){
            success = true;
            float temp = 65536.0 / 5.12;
            voltage = (((float)data) / temp);
            //printf("Voltage: %f\n\r",voltage);
            intvoltage = my_round(voltage);
            return intvoltage;
        }
        else{
            retries--;
            //printf("No response from Fuel Gauge. Retrying...\n\r");
        }
        __delay_ms(50);
    }
    
    return intvoltage;
}
