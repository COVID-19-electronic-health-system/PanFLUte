#include "../driver/adc.h"


void adcInit(void) { 
  /* Enable ADC */
  ADCSRA = (1 << ADEN) | (1 << ADSC);
  /* Left Adjust Results */
  //ADCSRB = (1 << ADLAR);
  //printf("ADC has started\n");
}


/*
void getPSI(void) {
  ADCSRA |= (1 << ADSC); // Start ADC conversion 
  float rawPresureData = ADCH; // Max is 8bit value	
  printf("PSI: %.2f", (rawPresureData / 255.0) * 14.5);
  _delay_ms(100);


uint8_t adcStart(void) {
  ADCSRA |= (1 << ADSC); // Start ADC conversion 
  loop_until_bit_is_clear(ADCSRA, ADSC); 
  uint8_t rawPresureData = ADCH; // Max is 8bit value
  
  return rawPresureData;

}
