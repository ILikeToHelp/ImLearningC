/* bit count as on page 50 */

int btcount(unsigned x){
  int b;
  for (b=0; x; x &=(x-1)){
    b++;
  }
  return b;
}
