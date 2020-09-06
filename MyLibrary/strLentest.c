#include <stdio.h>
#undef strlen
void main()
{
  int strlen(char x[]);
  char string [] = "hello world";
  printf("String: \"%s\". Its length: %d\n", string, strlen(string));
}
