#include <stdio.h>

/* verify whether getchar() != EOF returns 1 or 0 */

void main()
{
  // while(1)
  // {
  //   printf("Starting:\n");
  //   printf("%d\n", getchar() != EOF);
  // }

    do
    {
      printf("(getchar() != EOF) == %d\n", getchar() != EOF);
    }while(getchar() != EOF);
}
