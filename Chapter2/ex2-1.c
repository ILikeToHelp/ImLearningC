#include <stdio.h>
#include <limits.h>
#include <float.h>

/* demonstrates couple of values which can be found in limits.h */
void main()
{
printf("------- Char -------\n");
printf("Number of bits: %d\n", CHAR_BIT);
printf("Max value: %d\n", CHAR_MAX);
printf("Min value: %d\n", CHAR_MIN);

printf("------- Int -------\n");
printf("Max value: %d\n", INT_MAX);
printf("Min value: %d\n", INT_MIN);

printf("------- Short -------\n");
printf("Max value: %d\n", SHRT_MAX);
printf("Min value: %d\n", SHRT_MIN);

printf("------- Long -------\n");
printf("Max value: %ld\n", LONG_MAX);
printf("Min value: %ld\n", LONG_MIN);


printf("------- Unsigned -------\n");
printf("Long: %lu\n", ULONG_MAX);
printf("Int: %u\n", UINT_MAX);
printf("Short: %d\n", USHRT_MAX);
printf("Char: %d\n",UCHAR_MAX);
}
