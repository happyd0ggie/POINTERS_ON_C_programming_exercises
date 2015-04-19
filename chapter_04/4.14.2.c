/*
** Compute and print all primes from 1 to 100
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int
is_prime(int);

int
main(void)
{
	int i;
	for (i = 2; i < 100; ++i) {
		if (is_prime(i)) {
			printf("%d\t", i);
		}
	}
	printf("\n");

	return EXIT_SUCCESS;
}

int
is_prime(int a)
{
	int i;
	if (2 == a || 3 == a || 5 == a || 7 == a) {
		return 1;
	}
	
	for (i = 2; i * i < a; ++i) {
		if (a % i == 0) {
			return 0;
		}
	}
	return 1;
}