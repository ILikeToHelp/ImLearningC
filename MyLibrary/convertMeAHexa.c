#include <stdio.h>

/* converts string of hexadecimal characters to an integer. */

#include <ctype.h>

int htoi(char string[], int);
int getLine(char line[], int lim);
void main()
{
  char line [] = "0x0";
  int size = 2;

  printf("First, test 0x0 is converted correctly.\n");

  do
  {
    printf("Integer: %d\n", htoi(line, size));
    printf("Input a hexadecimal to be converted to decimal!\n");
} while( (size = getLine(line, 100) - 1) >= 0);

}

int htoi(char s [], int size)
{
  int n = 0;
  int i = 0;

  if(s[0] == EOF)
  {
    return -1;
  }

  if (s[0] == '0')
  {
    if(s[1] == 'x' || s[1] == 'X')
    {
      i = 2;
    }
    else
    {
      return -1;
    }
  }

  while((isdigit(s[i]) || tolower(s[i]) < 'g') && s[i] != EOF && i < size)
  {
    printf("%d\n", n);

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
