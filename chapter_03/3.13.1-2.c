#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int
main(void)
{
	printf("signed char: %d - %d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char: 0 - %d\n", UCHAR_MAX);
	printf("short: %d - %d\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short: 0 - %d\n", USHRT_MAX);
	printf("int: %d - %ld\n", INT_MIN, INT_MAX);
	printf("unsigned int: 0 - %ld\n", UINT_MAX);
	printf("long: %d - %ld\n", LONG_MIN, LONG_MAX);
	printf("unsigned long: 0 - %lld\n", ULONG_MAX);
	printf("long long: %lld - %lld\n", LLONG_MIN, LLONG_MAX);
	printf("unsigned long long: 0 - %lld\n", ULLONG_MAX);
	printf("float: %lf - %lf\n", FLT_MIN, FLT_MAX);
	printf("double: %lf - %lf\n", DBL_MIN, DBL_MAX);
	printf("long double: %lf - %lf\n", LDBL_MIN, LDBL_MAX);

	printf("%d %d %d\n", sizeof(7), sizeof(7l), sizeof(7ll));
	printf("%d %d %d\n", sizeof(float), sizeof(double), sizeof(long double));

	getchar();

	return EXIT_SUCCESS;
}

/*
** output:
** signed char: -128 - 127
** unsigned char: 0 - 255
** short: -32768 - 32767
** unsigned short: 0 - 65535
** int: -2147483648 - 2147483647
** unsigned int: 0 - -1
** long: -2147483648 - 2147483647
** unsigned long: 0 - 53499001697206271
** long long: -9223372036854775808 - 9223372036854775807
** unsigned long long: 0 - -1
** float: 0.000000 - 340282346638528860000000000000000000000.000000
** double: 0.000000 - 1797693134862315700000000000000000000000000000000000000000000
** 00000000000000000000000000000000000000000000000000000000000000000000000000000000
** 00000000000000000000000000000000000000000000000000000000000000000000000000000000
** 00000000000000000000000000000000000000000000000000000000000000000000000000000000
** 00000000.000000
** long double: 0.000000 - 17976931348623157000000000000000000000000000000000000000
** 00000000000000000000000000000000000000000000000000000000000000000000000000000000
** 00000000000000000000000000000000000000000000000000000000000000000000000000000000
** 00000000000000000000000000000000000000000000000000000000000000000000000000000000
** 0000000000000.000000
**
*/