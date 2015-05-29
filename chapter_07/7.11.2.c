#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int
gcd(int m, int n);

int
main(int argc, char *argv[])
{
	printf("%d\n", gcd(28, 21));
	getchar();

	return EXIT_SUCCESS;
}

int
gcd(int m, int n)
{
	if (m <= 0 || n <= 0) {
		return 0;
	}
	if (m % n == 0) {
		return n;
	}
	else {
		return gcd(n, m % n);
	}
}