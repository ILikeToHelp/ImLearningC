#include <stdio.h>
/* write findChar which returns position of the first character in s1
  that mach any character in s2 */

  #include <string.h> /* used to show difference between findChar and strpbrk */


int findChar(char string[], char stripThose[]);
int main()
{
  char str[100] = "Testing this new method. Hello there?!\n";
  char stripMe[100] = "Mum";

  printf("%d\n", findChar(str, stripMe)); // returns 17teen (position of 'm')

  char* g;
  g = strpbrk(str,stripMe);
  printf("%c\n", *g); // returns 'm'

  return 0; //well behaved
}

int findChar(char s1[], char s2[])
{
  int i, s1np, s2p;
  int notSeen;

  for(i = s1np = 0; s1[i] != '\0'; i++)
  {

    notSeen = 1;

    for (s2p = 0; s2[s2p] != '\0'; s2p++)
    {
      if(s1[i] != s2[s2p])
      {
        notSeen *= 1;
      }
      else
      {
        notSeen  *= 0;
        return i;
      }
    }
  }
  s1[s1np] = '\0';

  return -1;
}
