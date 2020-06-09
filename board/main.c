#include <util/delay.h>
#include "driver/usart.h"
#include "driver/adc.h"
#define OFFSET 44

static FILE mystdout = FDEV_SETUP_STREAM(print, NULL, _FDEV_SETUP_RW);
int a_in; 
int a;

int main(void) { 
    adcInit();
    usartInit(MYUBRR);
    stdout = &mystdout;
    while(1) {	
	while(ADCSRA & (1 << ADSC));
  	ADCSRA |= (1 << ADSC); // Start ADC conversion 
	a_in = ADCL;
	a = (ADCH * 255) + a_in;
	printf("10 bit ADC: %d\n", a - OFFSET);
        _delay_ms(150);
	}
    }
    return 0;
}
