#include <stdio.h>
/* program to display Celsius to Fahrenheit able
  with accurate numbers*/
#define STEP 23
#define LOWER -40
#define UPPER 100
void main()
{
  float fah, cels;

  printf(" ---- Temperature table ---- \n\n");
  printf("Celsius\tFahrenheit\t\n"); // the heading

  for (cels = LOWER; cels <= UPPER; cels += STEP)
  {
    fah = cels * (9.0/5.0)  + 32 ; // feh is float so CAN write (5.0/9.0)
    printf("%7.1f\t%10.1f\n", cels, fah);
    /*the %f is for float and double
    number after dot represents precision to which display the value*/
  }
}
