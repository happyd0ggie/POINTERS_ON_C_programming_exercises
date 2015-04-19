/*
** Compute the square root of an integer
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	double value;
	double value_bak;
	double next_value;
	scanf("%lf", &value);
	value_bak = value;
	next_value = (value + value_bak / value) / 2;
	while ((value - next_value) > 1e-10) {
		value = next_value;
		next_value = (value + value_bak / value) / 2;
		printf("%lf\n", value);
	}

	return EXIT_SUCCESS;
}