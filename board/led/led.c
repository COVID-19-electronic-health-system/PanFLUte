#include "../driver/led.h"

void ledInit(void) {
    DDRA |= (1 << DDA1);
}

void idle_blink(void) {
    PORTA |= (1 << STATUS_LED);
    _delay_ms(500);
    PORTA &= ~(1 << STATUS_LED);
    _delay_ms(250);
}
