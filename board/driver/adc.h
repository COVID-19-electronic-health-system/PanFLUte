#include <stdio.h>
#include <avr/io.h>
#include <math.h>
#include <util/delay.h>
#define SENSITIVITY 44.00

float kiloPascal, pascal;
float flow;
void adcInit(void);
void getPascal(void);
void getFlowRate(void);
