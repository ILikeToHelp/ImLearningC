/* bit count as on page 50 */

int bitcount(unsigned x){
  int b;
  for (b=0; x!= 0; x >>=1){
  if (x & 01){
    b++;
    }
  }
  return b;
}