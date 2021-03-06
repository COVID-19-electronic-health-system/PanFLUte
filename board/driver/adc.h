#ifndef ADC_H
#define ADC_H

#include <stdio.h>
#include <avr/io.h>
#include <math.h>
#include <util/delay.h>
#define OFFSET 44           // Value which offsets adc to 0
#define N 55                // Numbers of values averaged from adc

int adc_values_arr[N];
float calibrated_adc_value;
void adcInit(void);
float adcRead(void);

#endif // ADC_H
