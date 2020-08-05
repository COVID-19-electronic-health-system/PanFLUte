#include "driver/usart.h"
#include "driver/adc.h"

static FILE mystdout = FDEV_SETUP_STREAM(print, NULL, _FDEV_SETUP_RW);

int main(void) {  
    adcInit(); 
	usartInit(MYUBRR);
    stdout = &mystdout;
    while(1) {	
         rawADC();
    }
}
