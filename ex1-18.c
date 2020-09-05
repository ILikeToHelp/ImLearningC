#include <stdio.h>

/* Removes trailing blanks, and delets entirely empty lines */


/* PSEUDOCODE
  1. Get a line until EOF reached
    1.1 If the line is longer than 1
      1.1.1 Remove trailing blanks.
        (
          get last character befor '\n'.
            If it's a ' ' or a '\t' do nothing
            Else we found a char
              break of the loop
          the lines next char after a non-empty char is \n, and a null char.
        )
      1.1.2 If the line is longer than 1
        1.1.2.1 Save it
  2. Add null character to the end of all lines
  3. Print all saved lines like a string.
  */

  #define LIMIT 1000

int getLn(char line []);  /* returns lenght of a line */
void copy(char to[], char from []); /* copies string "from" to string "to" */
int strip(char line [], int size); /* removes trailing blanks, returns new length */
int save(char to[], int endOfTo, char from [], int fromLen);  /* returns where ended adding "from" */

void main()
{
  int currentLineL = 0;
  char line [LIMIT];

  char lines[LIMIT];
  int linesP = 0;

  while ((currentLineL = getLn(line)) > 0)
  /*repeat until EOF reached. Notice empty line is of length 1 ("\n")*/
  {
    if(currentLineL > 1)
    {
      currentLineL = strip(line, currentLineL);
      if(currentLineL > 1)
      {
        linesP = save(lines, linesP, line, currentLineL);
      }
    }
  }
  lines[linesP] = '\0'; /*INDICATES END OF A STRING */
  printf("\n%s", lines);/* print all lines saved */
}
int strip(char line[], int size)
{
  int i;
  for(i = size - 2; i >= 0; i--)
  {
    if(line[i] == ' ' || line[i] == '\t')
    {
      ;
    }
    else
    {
      break;
    }
  }
  i++;
  line[i] = '\n';
  i++;
  line[i] = '\0';
  return i;
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
  while((to[i] = from[i]) != '\0')
  {
    i++;
  }
}
