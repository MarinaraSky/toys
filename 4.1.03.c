#include <stdio.h>
#include <stdint.h>

int main(int argc, char **argv)
{
	int16_t wholeNum = 0; /* Uses smallest size allowed by standard */
	int32_t bigWholeNum = 0; /* Uses smallest size allowed by standard */
	float decimal = 3.14;
	double bigDecimal = 3.14;
	char letter = 41;

	long unsigned size = sizeof(wholeNum);
	printf("Size of int: at least %lu bytes\n", size);
	wholeNum |= 0x7fff;
	printf("Max value of int: %d\n", wholeNum);
	printf("Min value of int: %d\n\n", ~wholeNum); /* 2's compliment */
	size = sizeof(bigWholeNum);
	printf("Size of long int: at least %lu bytes\n", size);
	bigWholeNum |= 0x7fffffff;
	printf("Max value of long int: %d\n", bigWholeNum);
	printf("Min value of long int: %d\n\n", ~bigWholeNum);


	return 0;
}

