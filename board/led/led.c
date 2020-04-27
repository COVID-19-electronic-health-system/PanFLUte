#include "../driver/led.h"

void ledInit(void) {
    DDRA |= (1 << DDA1);
}

void idle_blink(unsigned char period) {
    PORTA |= (1 << STATUS_LED);
    _delay_ms(period);
    PORTA &= ~(1 << STATUS_LED);
    _delay_ms(period/2);
}
