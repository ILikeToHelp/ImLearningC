/*
	funtion to return x's n bits
	to the right of position p, right adjusted.

	E.g.:

	for binary :		11011
	bit positions:	43210

	x = 11011 (27 in decimal)
	p = 3
	n = 2
	should return bits 3 and 2 (1 and 0)

	x >> ((3+1) - 2) = 00110
	~(~0 << n) = ~(11111 << 2) = ~(11100) = 00011

	00110 & 00011 = 10 = 2(in decimal)

*/
unsigned getbits(unsigned x, int p, int n){
	return (x >> (p+1 - n)) & ~(~0 << n);
}
