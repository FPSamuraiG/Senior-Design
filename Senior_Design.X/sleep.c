
#include "sleep.h"

void sleep_setup(void) {
    IDLEN = 0;
    DOZEN = 0;
}

void sleep_enter(void) {
    SLEEP();
    NOP();
}