
#include "sleep.h"

int btn_state = 1; 
int input_handled = 1;

void sleep_setup(void) {
    IDLEN = 0;
    DOZEN = 0;
}

void sleep_enter(void) {
    SLEEP();
    NOP();
}

void btn_interrupt(void) {
    btn_state = btn_GetValue();
    input_handled = 0;
}

void tmr_interrupt(void) {
    TMR0_StopTimer();
    btn_state = btn_GetValue();
}
