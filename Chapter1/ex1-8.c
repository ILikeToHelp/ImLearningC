#include <stdio.h>
/* program to count blanks, tabs and newlines in an input */

void main()
{
  int cha;
  int tabs, blanks, newlines;
  tabs = blanks = newlines = 0; //see what happens when you dont do this :)
  while( (cha = getchar()) != EOF)
  {
    if (cha == '\n')
    {
      newlines++;
    }
    else if (cha == ' ')
    {
      blanks++;
    }
    else if (cha == '\t')
    {
      tabs++;
    }
  }

  printf("Tabs: %3d\tBlanks: %3d\tNewlines: %3d\n", tabs, blanks, newlines);
}
