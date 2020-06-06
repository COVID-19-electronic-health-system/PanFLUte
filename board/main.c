#include "driver/usart.h"
#include "driver/led.h" 
#include "driver/adc.h"

static FILE mystdout = FDEV_SETUP_STREAM(print, NULL, _FDEV_SETUP_RW);

int main(void) { 
    adcInit();
    usartInit(MYUBRR);
    stdout = &mystdout;
    while(1) {		
	printf("Should be sensor data: %d\n", adcStart());
    	delay_ms(1000);
    }
    return 0;
}
