#include <stdio.h>

/* this program demonstrates basic capabilites of ctype.h library */

#include <ctype.h>

void main()
{
  printf("Hello! I'm an annoying pacifer.\n");
  printf("Meaning: I'll echo everything you say, but all in lowercase.\n\n");
  int c;
  while((c = getchar()) != EOF)
  {
    putchar(tolower(c));
  }
}
