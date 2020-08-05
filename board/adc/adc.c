#include "../driver/adc.h"

void adcInit(void) { 
  /* Enable ADC */
  ADCSRA = (1 << ADEN) | (1 << ADSC);
}

void rawADC(void) {
    float sum = 0;
    int adc_values_arr[N];
    for (int i = 0; i < N; i++) {
	   while(ADCSRA & (1 << ADSC));
       ADCSRA |= (1 << ADSC); // Start ADC conversion
       int ten_bit_value = ADCL + (ADCH * 256);
	   adc_values_arr[i] = ten_bit_value;
       sum += adc_values_arr[i];
    }
    calibrated_adc_value = floor((sum / 55.0) - OFFSET);
    printf("Calibrated ADC Value: %.2f\n", calibrated_adc_value);
    _delay_ms(250);
}


void getPascal(void) {
  while(ADCSRA & (1 << ADSC));
  ADCSRA |= (1 << ADSC); // Start ADC conversion 
  int ten_bit_value = ADCL + (ADCH * 256);
  kiloPascal = ten_bit_value / OFFSET;
  pascal = fabs(kiloPascal - 0.98) * 1000.00;
  printf("Pa: %.2f\n", pascal);
  _delay_ms(250);
}

void getFlowRate(void) {
  while(ADCSRA & (1 << ADSC));
  ADCSRA |= (1 << ADSC); // Start ADC conversion 
  int ten_bit_value = ADCL + (ADCH * 256);
  kiloPascal = ten_bit_value / OFFSET;
  pascal = fabs(kiloPascal - 0.98) * 1000.00;   
  flow = sqrt(pascal / 33); // Bernoulli's equation
  printf("Flow rate %.2f cm/s\n", flow); 
  _delay_ms(250);
}
