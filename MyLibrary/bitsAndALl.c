#include <stdio.h>

#undef getbits

unsigned getbits(unsigned x, int p, int n);
unsigned bits(unsigned x);
 int main(int argc, char const *argv[]) {
  unsigned x [] = {9, 10, 12, 15}; // 1001, 1010, 1100, 1111 in binary
  for(int i = 0; i < 4; i++)
  {
    printf("Number: %d\tgetbits(2,2): %d\n",
     x[i], getbits(x[i], 3, 2));
  }
  unsigned b = 0;
  unsigned c = ~b;
  printf("%u", c);
  return 0;
}

unsigned getbits(unsigned x, int p, int n)
/* returns n bits starting at Pth position (0th, 1st, 2nd etc) */
{
  return(x >> (p+1-n)) & (~(~0 << n));
}
