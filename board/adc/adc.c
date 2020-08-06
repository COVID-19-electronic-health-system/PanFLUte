#include "../driver/adc.h"

void adcInit(void) { 
  /* Enable ADC */
  ADCSRA = (1 << ADEN) | (1 << ADSC);
}

float adcRead(void) {
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
    return calibrated_adc_value;
}

