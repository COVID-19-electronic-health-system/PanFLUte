#include "../driver/adc.h"


void adcInit(void) { 
  /* Enable ADC */
  ADCSRA |= (1 << ADEN);
  /* Left Adjust Results */
  ADCSRB |= (1 << ADLAR);
}


uint8_t adcStart(void) {
  ADCSRA |= (1 << ADSC); // Start ADC conversion 
  loop_until_bit_is_clear(ADCSRA, ADSC); 
  uint8_t rawPresureData = ADCH; // Max is 8bit value
  
  return rawPresureData;
}
