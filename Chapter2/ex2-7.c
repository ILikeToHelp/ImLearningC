/*
  function to invert n bits from position p in the bit string x
  so for x = 0000010101
  positions: 9876543210
  p = 1
  n = 2

  0000010110
  9876543210

  or

  x = 10 10100  1111
  p = 8
  n = 5

  input 1359
  output 10 01011 1111 = 1215
*/

unsigned invert(unsigned x, int p, int n){
  if(n-1 > p)
  {
    return -1;
  }
  unsigned frontOfX = x >> (p+1); //discard the ones to be inverted
  unsigned maskForInversion = ~(~0 << n);
  unsigned bitToBeReversed = getbits(x, p, n); //bTBR
  unsigned reversedBits = maskForInversion ^ bitToBeReversed; //mask xor bTBR
  unsigned returnVal = (frontOfX << n) | reversedBits;
  if ((p-n) >= 0){
  unsigned backOfX = getbits(x, (p-n), (p-n+1));
  return  returnVal << (p+1-n) | backOfX;
  }
  return returnVal;
}
