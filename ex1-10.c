#include <stdio.h>
/* program to replace tabs, backspaces and backslashes with visible characters*/

void main()
{
  int cha;
  while( (cha = getchar()) != EOF)
  {
    if (cha == '\t')
    {
      printf("\\t");
    }
    else if (cha == '\b')
    {
      printf("\\b");
    }
    else if (cha == '\\')
    {
      printf("\\\\");
    }
    else
    {
      putchar(cha);
    }
  }
}
