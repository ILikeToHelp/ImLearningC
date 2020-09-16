#include <stdio.h>

/*
	funtion to return x,
	which n bits to the right of the bit at position p
	are identical to the n righmost bits of y

	so for x = 101010
	and y	   = 100001
	n = 2
	p = 2

	should return 1010(unchanged)01

	or for n = 2, p = 4 should return 10(01)10

*/

unsigned getbits(unsigned, int ,int);

int main(){
	unsigned n_bits_of_y_in_x(unsigned x, unsigned y, int p, int n);
	printf("%u\n", n_bits_of_y_in_x(42,33,4,2));
	return 0;
}

unsigned n_bits_of_y_in_x(unsigned x, unsigned y, int p, int n){
	unsigned nBitsOfY = y & (~(~0 << n));
	unsigned frontOfX = ((x>>p) <<n);
	unsigned returnVal = nBitsOfY | frontOfX;
	int difference = p - n;
	returnVal <<= difference;
	if (difference > 0)
	{
		unsigned backOfX = getbits(x, difference-1, difference);

		return returnVal | backOfX;
	}
	return returnVal;
}
