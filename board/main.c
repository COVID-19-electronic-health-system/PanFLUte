#include <util/delay.h>
#include "driver/usart.h"
#include "driver/led.h"
#include "driver/adc.h"

static FILE mystdout = FDEV_SETUP_STREAM(print, NULL, _FDEV_SETUP_RW);

int main(void) {  
    adcInit();
    usartInit(MYUBRR);
    stdout = &mystdout;
    while(1) {	
	while(ADCSRA & (1 << ADSC));
  	ADCSRA |= (1 << ADSC); // Start ADC conversion 
	// TODO: Must subtract ADCH from offset.
	printf("PSI: %.2f\n", (ADCH / 255.0) * 14.5);
    	delay_ms(150);
	}
}
