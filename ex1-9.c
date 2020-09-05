#include <stdio.h>
/* program to replace multiple blanks by a single one */

void main()
{
  int cha;
  while( (cha = getchar()) != EOF)
  {
    putchar(cha);
    if (cha == ' ')
    {
      do
      {
        cha = getchar();
        if (cha != ' ')
        {
          putchar(cha);
          break;
        }
      }while(cha != EOF);
    }
  }
}
