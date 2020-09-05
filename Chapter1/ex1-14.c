#include <stdio.h>

/* Program to print histogram of frequency of characters in the input */

#define ASCIIA 65 //makes the calculation to find position more readible
#define ASCIIZ 90
#define ASCIIa 96
#define ALPHABETSIZE 26
void horizontalHistogram(int freqArr[ALPHABETSIZE]);
void verticalHistogram(int freqArr[ALPHABETSIZE]);


int frequencyArray[ALPHABETSIZE];
void main()
{
  int cha;
  int position;

  for (int i = 0; i < ALPHABETSIZE; i++)
  {
    frequencyArray[i] = 0;
  }

  while((cha = getchar()) != EOF)
  {

    if(cha > ASCIIa)
    {
      cha = cha - 32;
    }
    if (cha >= ASCIIA && cha <= ASCIIZ)
    {
      position = cha - ASCIIA;
      frequencyArray[position]++;
    }

  }
  printf("\n");
  horizontalHistogram(frequencyArray);
  verticalHistogram(frequencyArray);

}


void horizontalHistogram(int frequencyArray[])
{
  printf("The Horizontal Histogram of Character Frequency:\n");
  for(int j = 0; j < ALPHABETSIZE; j++)
  {
    printf("%c:", j + ASCIIA);
    for (int k = 0; k < frequencyArray[j]; k++)
    {
      printf("#");
    }
    printf("\n");
  }
  printf("\n");
}
void verticalHistogram(int frequencyArray[])
{
  //first find which is the highest number of occurences
  int highestOccurences = 0;
  for(int m = 0; m < ALPHABETSIZE; m++)
  {
    if (frequencyArray[m] > highestOccurences)
    {
      highestOccurences = frequencyArray[m];
    }
  }

  printf("The Vertical Histogram of Character Frequency:\n");
  for(int i = highestOccurences; i > 0; i--)
  // with this variable we know how many lines to produce
  {
    for(int j = 0; j < ALPHABETSIZE; j++)
    {
      if(frequencyArray[j] >= i)
      {
        printf(" ### ");
        //each time we find the stack should be high enough we put a hash
      }
      else
      {
        printf("     ");
        //each time it's not, we must fill the space with blanks.
      }
    }
    printf("\n");
  }
  for(int k = ASCIIA; k < ASCIIA + ALPHABETSIZE; k++)
  {
    printf("  %c  ", k);
  }
  printf("\n");
}
