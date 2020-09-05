#include <stdio.h>

/* This is the temperature conversion program re-written to use functions
    (ex1-3.c revised ) */

#define STEP 20
#define LOWERLIMIT -40
#define UPPERLIMIT 100

float celsiusToFahrenheit(float celsius);
void main()
{
  printf("\n****************************************\n");
  printf("Celsius to Fahrenheit conversion program\n\n");
  printf("Celsius\tFahrenheit\n");
  for(float i = LOWERLIMIT; i <= UPPERLIMIT; i+= STEP)
  {
    printf("%7.1f\t%10.1f\n", i, celsiusToFahrenheit(i));
  }
  printf("\n****************************************\n\n");
}

float celsiusToFahrenheit(float celsius)
{
  float fahrenheit;
  fahrenheit = celsius * (9.0/5.0) + 32;
  return fahrenheit;
}
