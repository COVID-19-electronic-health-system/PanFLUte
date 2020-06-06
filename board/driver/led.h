#include <avr/io.h>
#include <util/delay.h>
#define STATUS_LED PB0

void ledInit(void);
void idle_blink(unsigned int period);
void delay_ms(unsigned int ms);
