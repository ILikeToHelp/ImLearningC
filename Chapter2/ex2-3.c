#include <stdio.h>

/* converts string of hexadecimal characters to an integer. */

#include <ctype.h>

int htoi(char string[]);

void main()
{
  char hexa[] = "5FB4";
  printf("%s in decimal: %d\n", hexa, htoi(hexa));

}

int htoi(char s [])
{
  int n,i;
  n = 0;
  if(s[0]=='\0' && (s[1] == 'x' || s[1] == 'X'))
  {
    /* allow leading 0x or 0X, set i accordingly */
    i = 2;
  }
  else if (s[0]=='\0' && isdigit(s[1]))
  {
    /* return error signal for leading 0 numbers */
    return -1;
  }
  else
  {
    i = 0;
  }
  while(isdigit(s[i]) || tolower(s[i]) < 'g')
  {
    if(isdigit(s[i]))
    {
      n = 16 * n + (s[i] - '0');
    }
    else
    {
      if(tolower(s[i]) == 'a')
      {
        n = 16 * n + 10;
      }
      else if(tolower(s[i]) == 'b')
      {
        n = 16 * n + 11;
      }
      else if(tolower(s[i]) == 'c')
      {
        n = 16 * n + 12;
      }
      else if(tolower(s[i]) == 'd')
      {
        n = 16 * n + 13;
      }
      else if(tolower(s[i]) == 'e')
      {
        n = 16 * n + 14;
      }
      else if(tolower(s[i]) == 'f')
      {
        n = 16 * n + 15;
      }
    }
    i++;
  }

  return n;
}
