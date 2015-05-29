#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int
hermite(int n, int x);

int
main(int argc, char *argv[])
{
	int i;
	for (i = 0; i <= 30; i++) {
		printf("%d\n", hermite(i, 10));
	}

	getchar();
	return EXIT_SUCCESS;
}

int
hermite(int n, int x)
{
	if (n <= 0) {
		return 1;
	}
	else if (1 == n) {
		return 2 * x;
	}
	else {
		return 2 * x * hermite(n - 1, x) - 2 * (n - 1) * hermite(n - 2, x);
	}
}