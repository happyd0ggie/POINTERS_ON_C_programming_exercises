#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int
main(void)
{
	//long li = 32765l;
	long li = 32768l;
	short si = li;

	printf("%ld %d\n", li, si);

	getchar();

	return EXIT_SUCCESS;
}