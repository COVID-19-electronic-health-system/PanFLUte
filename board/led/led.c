#include "../driver/led.h"

void ledInit(void) {
    DDRA |= (1 << DDA1);
}

void idle_blink(unsigned int period) {
    PORTA |= (1 << STATUS_LED);
    delay_ms(period);
    PORTA &= ~(1 << STATUS_LED);
    delay_ms(period/2);
}

void delay_ms(unsigned int ms) {
    for (int i = 0; i < ms; i++) {
        _delay_ms(1);
    }
}
