#include <stdio.h>
/* program to display Celsius to Fahrenheit able
  with accurate numbers*/
#define STEP 20
#define LOWER -40
#define UPPER 300
void main()
{
  float fah, cels;

  printf(" ---- Temperature table ---- \n\n");
  printf("Fahrenheit\tCelsius\n"); // the heading

  for (fah = UPPER; fah >= LOWER; fah -= STEP)
  {
    printf("%10.1f\t%7.1f\n", fah, (fah - 32) * (5.0/9.0));
  }
}
