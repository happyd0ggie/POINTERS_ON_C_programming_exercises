#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "increment.h"
#include "negate.h"

int
main(void)
{
	int result;

	/*
	** handling 10
	*/
	result = increment(10);
	printf("%d\n", result);
	result = negate(10);
	printf("%d\n", result);

	/*
	** handling 0
	*/
	result = increment(0);
	printf("%d\n", result);
	result = negate(0);
	printf("%d\n", result);

	/*
	** handling -10
	*/
	result = increment(-10);
	printf("%d\n", result);
	result = negate(-10);
	printf("%d\n", result);

	getchar();

	return EXIT_SUCCESS;
}