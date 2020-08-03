#include "../driver/adc.h"

void adcInit(void) { 
  /* Enable ADC */
  ADCSRA = (1 << ADEN) | (1 << ADSC);
}


void getPascal(void) {
  while(ADCSRA & (1 << ADSC));
  ADCSRA |= (1 << ADSC); // Start ADC conversion 
  int ten_bit_value = ADCL + (ADCH * 256);
  kiloPascal = ten_bit_value / SENSITIVITY;
  pascal = fabs(kiloPascal - 0.98) * 1000.00;
  printf("Pa: %.2f\n", pascal);
  _delay_ms(250);
}

void getFlowRate(void) {
  while(ADCSRA & (1 << ADSC));
  ADCSRA |= (1 << ADSC); // Start ADC conversion 
  int ten_bit_value = ADCL + (ADCH * 256);
  kiloPascal = ten_bit_value / SENSITIVITY;
  pascal = fabs(kiloPascal - 0.98) * 1000.00;   
  flow = sqrt(pascal / 33); // Bernoulli's equation
  printf("Flow rate %.2f cm/s\n", flow); 
  _delay_ms(250);
}
