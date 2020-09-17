#include <stdio.h>
#include <math.h>
#include <limits.h>
// 32 16 8 4 2 1
// 1  1  1 1 0 0
unsigned rightrot(unsigned x, int n);
int main(){
  printf("ANSWER: %u", rightrot(60,2));
  return 0;
}
