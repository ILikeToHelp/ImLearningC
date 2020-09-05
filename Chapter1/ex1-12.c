#include <stdio.h>

/* output the input, word per line */
void main()
{
  int cha;
  while ((cha = getchar()) != EOF)
  {
    if (cha != '\n' && cha != '\t' && cha != ' ')
    {
      putchar(cha);
    }
    else
    {
      putchar('\n');
    }
  }

}
