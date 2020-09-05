#include <stdio.h>

/* Program to print histogram of length of words in the input */

#define IN 1  // IN/OUT is usefull for counting word length
#define OUT 0
#define LIMIT 10000 //for sake of simplicity I limit input to 10000 characters

void horizontalHistogram(int longest, int arrInt[LIMIT]);
void verticalHistogram(int longest, int arrInt[LIMIT]);

void main()
{
  char cha;
  int insideOutside = OUT;
  int longest = 0, wordLength = 0;
  char inputArray[LIMIT];
  int arrayPointer = 0;
  int longestEndsAt = 0;
  int wordLengthArray[LIMIT];

  while((cha = getchar()) != EOF)
  {
    inputArray[arrayPointer++] = cha;
    // save the input to a string
    if(cha == ' ' || cha == '\t' || cha == '\n')
    //if we stumbled on a whitespace, we are outside a word
    {
      insideOutside = OUT;
      wordLengthArray[wordLength]++; // #TODO fix this; this is unsafe
      if(wordLength > longest)
      {
        longest = wordLength;
        //longestEndsAt = arrayPointer - 1;
        //update the longest variable if neccesary
      }
      wordLength = 0;
      //reset the length of a current word tracked
    }
    else if (insideOutside == OUT)
    //character isn't a whitespace, and position is OUT, so we found a new word
    {
      insideOutside = IN;
      wordLength = 1;
    }
    else
    {
      if(cha != '.' && cha != ',' && cha != ';'
        && cha != '/'  && cha != '?'  && cha != '!')
      //to ensure we don't count common interpunction as word lenght
      {
        wordLength++;
      }
    }
  }
  inputArray[arrayPointer++] = '\0';

  horizontalHistogram(longest, wordLengthArray);
  verticalHistogram(longest, wordLengthArray);

}
void verticalHistogram(int longest, int wordLengthArray[])
// #TODO improve so formatting fits for numbers > 9
{
  //first find which is the highest number of occurences
  int highestOccurences = 0;
  for(int m = 1; m <= longest; m++)
  {
    if (wordLengthArray[m] > highestOccurences)
    {
      highestOccurences = wordLengthArray[m];
    }
  }

  printf("The Vertical Histogram of Word Lengths:\n");
  for(int i = highestOccurences; i > 0; i--)
  // with this variable we know how many lines to produce
  {
    for(int j = 1; j <= longest; j++)
    {
      if(wordLengthArray[j] >= i)
      {
        if (longest < 10)
        {
          printf(" # ");
        }
        else
        {
          printf(" ### ");
        }

        //each time we find the stack should be high enough we put a hash
      }
      else
      {
        if (longest < 10)
        {
          printf("   ");
        }
        else
        {
          printf("     ");
        }
        //each time it's not, we must fill the space with blanks.
      }
    }
    printf("\n");
  }
  for(int k = 1; k <= longest; k++)
  {
    if(k < 10 && longest < 10)
    {
      printf(" %d ", k);
    }
    else if(k < 10)
    {
        printf("  %d  ", k);
    }
    else
    {

          printf(" %d  ", k);
    }
  }
  printf("\n");
}

void horizontalHistogram(int longest, int wordLengthArray[])
{
  printf("The Horizontal Histogram of Word Lengths:\n");
  for(int j = 1; j <= longest; j++)
  {
    printf("%d:", j);
    for (int k = 0; k < wordLengthArray[j]; k++)
    {
      printf("#");
    }
    printf("\n");
  }
}

// printf("Longest word's length: %d\n", longest);
// printf("The word: ");
// for (int i = longestEndsAt - longest; i < longestEndsAt; i++)
// {
//   printf("%c", inputArray[i - 1]);
// }
// printf("\n");
