#include <stdio.h>

/* Write a function called reverse(s) that reverses the characters of string s
    "Use it to write a program that reverses its input line at a time." */

#define LIMIT 1000
void reverse(char s[], int size);  /* reverses order of characters in a string */
int getLn(char line[]);
int save(char to[], int endOfTo, char from[], int fromLen);
void copy(char to[], char from[]);

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
      reverse(line, currentLineL);
      linesP = save(lines, linesP, line, currentLineL);
    }
  }
  lines[linesP] = '\0'; /*INDICATES END OF A STRING */
  printf("\n%s", lines);/* print all lines saved */
}
int getLn(char line[])
{
  int length = 0;
  int c;
  while((c = getchar()) != EOF && c != '\n' && length < LIMIT - 1)
  {
    line[length++] = c;
  }
  if(c == '\n')
  {
    line[length++] = '\n';
  }
  line[length] = '\0';
  return length;
}

void reverse(char s[], int size)
{
  int i = 0;
  char temp [LIMIT];
  copy(temp, s);
  while(i < size - 1)
  {
    s[i++] = temp[size - i - 2];
  }
  s[i++] = '\n';
  s[i] = '\0';
}
void copy(char to[], char from[])
{
  int i = 0;
  while((to[i] = from[i]) != '\0')
  {
    i++;
  }
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
