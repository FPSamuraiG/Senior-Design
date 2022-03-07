
#include "sleep.h"

int btn_state = 0; 
//int input_handled = 1;

void sleep_setup(void) {
    IDLEN = 0;
    DOZEN = 0;
}

void sleep_enter(void) {
    SLEEP();
    NOP();
}

void btn_interrupt(void) {
    __delay_ms(1);
    int state = btn_GetValue();
    __delay_ms(1);
    if (btn_GetValue() == state) //Check if the button is still the same state
                                 //after a brief delay to debounce.
    {
        if (state == LOW) btn_state = 1;
        else btn_state = 0;
    }
    
//    btn_state = btn_GetValue();
//    input_handled = 0;
}