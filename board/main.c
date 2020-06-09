#include <util/delay.h>
#include "driver/usart.h"
#include "driver/led.h"
#include "driver/adc.h"
#define OFFSET 44

static FILE mystdout = FDEV_SETUP_STREAM(print, NULL, _FDEV_SETUP_RW);
int a_in; 
int a;

<<<<<<< HEAD
int main(void) { 
=======

int main(void) {  
>>>>>>> b4fc6fd1c59c6124dbb1c7cc156b1d2dfa90a838
    adcInit();
    usartInit(MYUBRR);
    stdout = &mystdout;
    while(1) {	
	while(ADCSRA & (1 << ADSC));
  	ADCSRA |= (1 << ADSC); // Start ADC conversion 
<<<<<<< HEAD
	a_in = ADCL;
	a = (ADCH * 255) + a_in;
	printf("10 bit ADC: %d\n", a - OFFSET);
        _delay_ms(150);
	}
=======
	  // TODO: Must subtract ADCH from offset.
	  printf("PSI: %.2f\n", (ADCH / 255.0) * 14.5);
    delay_ms(150);

int main(void) { 
    adcInit();
    usartInit(MYUBRR);
    stdout = &mystdout;
    while(1) {		
	    printf("Should be sensor data: %d\n", adcStart());
    	delay_ms(1000);
>>>>>>> b4fc6fd1c59c6124dbb1c7cc156b1d2dfa90a838
    }
    return 0;
}