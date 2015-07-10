#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 0
#define FALSE 1
typedef unsigned char uchar;

uchar * primeNumbersBySieveOfEratosthenes(size_t n);

int
main(int argc, char *argv[])
{
	int i;
	uchar *num = primeNumbersBySieveOfEratosthenes(10000);
	for (i = 2; i <= 10000; ++i)
	{
		if (*(num + i) == TRUE)
		{
			printf("%7d ", i);
		}
	}

	getchar();
	return EXIT_SUCCESS;
}

uchar * 
primeNumbersBySieveOfEratosthenes(size_t n)
{
	/* 初始化素数数组 */
	uchar* num = (uchar*)malloc(sizeof(uchar) * n);
	for (size_t i = 2; i < n; ++i)
	{
		*(num + i) = TRUE;
	}
	/* 按照埃拉托斯特尼筛法，将为基数的倍数的所有数标记为非素数 */
	size_t i = 2;
	while (i * i <= n)
	{
		for (size_t c = 2, idx = 2 * i; idx < n ; ++c, idx = i * c)
		{
			*(num + idx) = FALSE;
		}
		do
		{
			++i;
		} while (i * i <= n && *(num + i) == FALSE);
	}
	return num;
}