#include <stdio.h>
#include <stdint.h>
#include <float.h>

int main(int argc, char **argv)
{
	int16_t wholeNum = 0; /* Uses smallest size allowed by standard */
	int32_t bigWholeNum = 0; /* Uses smallest size allowed by standard */
	uint16_t wholeNumU = 0; /* Uses smallest size allowed by standard */
	uint32_t bigWholeNumU = 0; /* Uses smallest size allowed by standard */
	float decimal = 3.14;
	double bigDecimal = 3.14;
	char letter = 0;
	unsigned char letterU = 0;

	/* Sizes */
	long unsigned size = sizeof(wholeNum);
	printf("Size of int: at least %lu bytes\n", size);
	wholeNum |= 0x7fff;
	printf("Max value of int: %d\n", wholeNum);
	printf("Min value of int: %d\n\n", ~wholeNum); /* 2's compliment */

	size = sizeof(wholeNumU);
	printf("Size of unsigned int: at least %lu bytes\n", size);
	printf("Max value of unsigned int: %hu\n", ~wholeNumU);
	printf("Min value of unsigned int: %hu\n\n", wholeNumU);

	size = sizeof(bigWholeNum);
	printf("Size of long int: at least %lu bytes\n", size);
	bigWholeNum |= 0x7fffffff;
	printf("Max value of long int: %d\n", bigWholeNum);
	printf("Min value of long int: %d\n\n", ~bigWholeNum);
	
	size = sizeof(bigWholeNum);
	printf("Size of long unsigned int: at least %lu bytes\n", size);
	printf("Max value of long unsigned int: %u\n", ~bigWholeNumU);
	printf("Min value of long unsigned int: %u\n\n", bigWholeNumU);

	size = sizeof(decimal);
	printf("Size of float: %lu bytes\n", size);
	printf("Max value of float: %e\n", FLT_MAX);
	printf("Min value of float: %e\n\n", FLT_MIN);
	
	size = sizeof(bigDecimal);
	printf("Size of double: %lu bytes\n", size);
	printf("Max value of double: %e\n", DBL_MAX);
	printf("Min value of double: %e\n\n", DBL_MIN);

	size = sizeof(letter);
	printf("Size of char: %lu bytes\n", size);
	letter |= 0x7f;
	printf("Max value of char: %d\n", letter);
	printf("Min value of char: %d\n\n", ~letter);

	size = sizeof(letterU);
	printf("Size of unsigned char: %lu byte\n", size);
	printf("Max value of char: %hhu\n", ~letterU);
	printf("Min value of char: %hhu\n\n", letterU);

	return 0;
}

