#include <stdio.h>
/* program to display Fahrenheit to Celsius table
  with appropriate headings. */
void main()
{
  int step, fah, cels;
  step = 20;

  printf(" ---- Temperature table ---- \n\n");
  printf("Fahrenheit\tCelsius\t\n"); // the heading

  for (fah= -40; fah <= 100; fah = fah + step)
  {
    cels = 5 * (fah - 32) / 9; // can't write 5/9 or all results will be 0.
    printf("%10d\t%7d\n", fah, (5.0/9.0) * (fah - 32));
    /*the %d is substituted with an integer, the number before
     defines size of the space into which it shall be put */
  }
}
