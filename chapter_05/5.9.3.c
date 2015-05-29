#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

unsigned int
reverse_bits(unsigned int value);

int
main(void)
{
	printf("%u\n", reverse_bits(25));

	return EXIT_SUCCESS;
}

unsigned int
reverse_bits(unsigned int value)
{
	unsigned int answer;
	unsigned int i;
	answer = 0;
	for (i = 1; i != 0; i <<= 1) {
		answer <<= 1;  /* answer left shift */
		if (value & 1) {
			answer |= 1;
		}
		value >>= 1;  /* value right shift */
	}

	return answer;
}