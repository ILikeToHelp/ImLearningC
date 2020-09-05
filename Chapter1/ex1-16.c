#include <stdio.h>

/* Longest-line program with key functions getline() and copy() */

#define LIMIT 1000


int getLn(char line []);  /* returns lenght of a line */
void copy(char to[], char from []); /* copies string "from" to string "to" */

void main()
{
  int currentLineL = 0;
  int longestLineL = 0;

  char line [LIMIT];
  char longestLine[LIMIT];

  while ((currentLineL = getLn(line)) > 0)
  /*repeat until EOF reached. Notice how even empty line is of length 1 ("\n")*/
  {
    if(currentLineL > longestLineL)
    {
      longestLineL = currentLineL;
      copy(longestLine, line);
      /* only overwrite the string longestLine, when a longer line is found */
    }
  }
  printf("\nLongest line: \"%s\"\n", longestLine );
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
  line[i] = '\0';
  return i;
}

void copy(char to[], char from[])
{
  int i = 0;
  while((to[i] = from[i]) != '\0')
  {
    i++;
  }
}
