#include <avr/io.h>
#include <util/delay.h>
#define STATUS_LED PA1

void ledInit(void);
void idle_blink(unsigned int period);
void delay_ms(unsigned int ms);
