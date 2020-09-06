/* Basic function returning length of a string.

  Takes advantage of fact that trings are technically
    arrays of characters with the zero character at the end. */

int strlen(char s[])
{
  int i = 0;
  while(s[i++] != '\0')
    ;
  return i;
}
