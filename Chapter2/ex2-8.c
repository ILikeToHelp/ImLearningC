#include <limits.h>
#include <math.h>
#include <stdio.h>
#define bitsInUnsigned 32
/* rotate the  x by n bits to the right */
unsigned rightrot(unsigned x, int n){
  unsigned rotateAndLose = x >> n; //shift
  unsigned rotatedToFront = x & (~(~0 << n)); // get bits which would be lost

  unsigned shiftedToFront = rotatedToFront << (bitsInUnsigned - n);
  return shiftedToFront | rotateAndLose;
}
