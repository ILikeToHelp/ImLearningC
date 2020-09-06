#include <stdio.h>

/* converts string of number characters to an integer. */

#include <ctype.h>

int atoi(char string[]);
void main()
{
  char nine_thousand[] = "9000";
  printf("ctype.h library power is over %d :o \n", atoi(nine_thousand));

}

int atoi(char s [])
{
  int n,i;
  n = 0;

  for(i = 0; isdigit(s[i]); ++i)
  {
    n = 10 * n + (s[i] - '0');
  }

  return n;
}
