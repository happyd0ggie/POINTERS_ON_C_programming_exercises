#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int
max_list(int x1, ...);

int
main(int argc, char *argv[])
{
	printf("%d\n", max_list(2, 3, 24, 9, 12, -1));

	getchar();
	return EXIT_SUCCESS;
}

int
max_list(int x1, ...)
{
	int max = x1;
	int temp;
	va_list va;
	va_start(va, x1);
	while ((temp = va_arg(va, int)) > 0)
	{
		if (temp > max)
		{
			max = temp;
		}
	}
	va_end(va);

	return max;
}