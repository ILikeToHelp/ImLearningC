#include <stdio.h>

/* write alternate function to squeeze which deletes all charactes of s2 in s1*/

void squeeze(char string[], int character);
void strip(char string[], char stripThose[]);
int main()
{
  char str[100] = "Testing this new method. Hello there?!\n";
  char stripMe[100] = "Works!";
  int charE = 'e';
  squeeze(str, charE);
  strip(str, stripMe);
  return 0;
}

void strip(char s1[], char s2[])
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
      }
    }
    if(notSeen)
    {
      s1[s1np++] = s1[i];
    }
  }
  s1[s1np] = '\0';
  printf("%s", s1);
}




void squeeze(char s[], int c)
/* function which removes all occurences of c in s */
{
  int i, j;
  for(i=j=0; s[i] != '\0'; i++) //looping through until end of string
  {
    if(s[i] != c) //if character at position i is not c
    {
      s[j++] = s[i]; //assign it to position j
    }
  }
  s[j] = '\0';
  printf("%s", s);
}
