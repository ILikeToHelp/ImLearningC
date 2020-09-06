/* a basic function to return length of a string */

int strlen(char s[])
{
  int i = 0;
  while(s[i++] != '\0')
    ;
  return i;
}
