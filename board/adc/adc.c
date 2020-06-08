#include "../driver/adc.h"

void adcInit(void) { 
  /* Enable ADC */
  ADCSRA = (1 << ADEN) | (1 << ADSC);
  /* Left Adjust Results */
  ADCSRB = (1 << ADLAR);
 //printf("ADC has started\n");
}

/*
void getPSI(void) {
  ADCSRA |= (1 << ADSC); // Start ADC conversion 
  float rawPresureData = ADCH; // Max is 8bit value	
  printf("PSI: %.2f", (rawPresureData / 255.0) * 14.5);
  _delay_ms(100);
}
*/
