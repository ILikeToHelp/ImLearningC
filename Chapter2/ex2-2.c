#include <stdio.h>

/* getLine without "&&" or "||" operators */

int getLine(char s[], int lim)
{
  int c,i;

  for (i = 0; (i < lim - 1) *((c=getchar()) != EOF) * (c != '\n'); i++)
  /*
  I've used * instead of && because any evaluation like: "is x bigger than y"
will result in value 1 if the statment is true  or value 0 if the statment is
false. If I want to ensure all of the statments are true, I can just multiply
their results, since:
T && T && T is T (1). 1*1*1 is also 1.
*/
  {
    s[i] = c;
  }
  if (c == '\n')
  {
    s[i] = c;
    i++;
  }
  s[i] = '\0';
  return i;
}
