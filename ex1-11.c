#include <stdio.h>

/* word count program;
  To test such program we would try empty files/input and extremely long ones */
#define IN 1
#define OUT 0
/* we're using here a very important concept of STATES.
  those can be simple boolean values like IN/OUT or a complicated set of states
  desscribed with characters, strings, integers or even objects.
  E.g. in a program that solves quadratic equations we could have string states
  : "unsorted equation", "0 on one side", "factorisation", "root finding`".
  In general, states allow for easier insight for the programmer as to
  at what stage his program is, and they make the code easier to read.
  */
void main()
{
  int wc = 0, cha, position = OUT;
  while ((cha = getchar()) != EOF)
  {
    if (cha == '\n' || cha == '\t' || cha == ' ')
    {
      position = OUT;
    }
    else if (position == OUT)
    {
      position = IN;
      wc++;
    }
    else
    {
      ;
    }
  }

  printf("Word Count: %d\n", wc);
}
