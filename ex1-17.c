#include <stdio.h>

/* program to print all input lines that are longer than INPUTLIM characters */

#define INPUTLIM 5
#define LIMIT 1000

int getLn(char line []);  /* returns lenght of a line */
void copy(char to[], char from []); /* copies string "from" to string "to" */
int save(char to[], int endOfTo, char from [], int fromLen);  /* returns where ended adding "from" */

void main()
{
  int currentLineL = 0;
  char line [LIMIT];

  char lines[LIMIT];
  int linesP = 0;

  while ((currentLineL = getLn(line)) > 0)
  /*repeat until EOF reached. Notice how even empty line is of length 1 ("\n")*/
  {
    if(currentLineL > INPUTLIM)
    {
      linesP = save(lines, linesP, line, currentLineL);
    }
  }
  lines[linesP] = '\0'; /* REMEMBER TO ALWAYS INDICATE END OF A STRING */
  printf("\n%s", lines);
}

int save(char to[], int endOfTo, char from[], int fromLen)
{
  int i = 0;

  while(i <= fromLen)
  {
    to[endOfTo + i] = from[i];
    i++;
  }
  endOfTo += fromLen;
  return endOfTo;
}
int getLn(char line[])
{
  int c, i = 0; /* c for character, i as a counter */
  while((c = getchar()) != EOF && c != '\n' && i < LIMIT - 1)
  /*terminate early for too large input, and when end of line/file is reached*/
  {
    line[i] = c;
    i++;
  }
  if (c == '\n')
  {
    line[i] = c;
    i++;
  }
  line[i] = '\0';
  return i;
}

void copy(char to[], char from[])
{
  int i; /* as above */
  while((to[i] = from[i]) != '\0') /* This is true beauty. The thing below...*/
  {
    i++;
  }

  // int c, i; /* as above */
  // for(i = 0; (c = from[i]) != EOF && c != '\n'; i++)
  // /* this time we DO NOT use getchar() to read input - it's already saved in
  //   the "from" array of characters, so use from[i] instead.
  // */
  // {
  //   to[i] = from[i];
  // }
  //
  // /* the below ensures correct formatting for a string */
  // if(c == '\n')
  // {
  //   i++;
  //   to[i] = '\n';
  // }
  //
  // i++;
  // to[i] = '\0';
}
