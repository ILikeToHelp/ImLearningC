#include <stdio.h>
/* "Experiment what happens when printing \c
  where c is some character" */
int main()
{
  printf("\\n:");
  printf("\n");
  printf("\\b:");
  printf("\b"); //notice how it actually deltes the ":" from the line above

  return 0; //int main, should return int (aka well behaved)
}
