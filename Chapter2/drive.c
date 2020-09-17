#include <stdio.h>
#include <math.h>
#include <limits.h>
// 32 16 8 4 2 1
// 1  1  1 1 0 0
int lower(int c);
int main(){
  int c;
  while(c != EOF){
    c = getchar();
    printf("%c", lower(c));
  }
  return 0;
}
