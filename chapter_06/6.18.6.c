#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define TRUE 0
#define FALSE 1
#define SIZE 1000000

typedef unsigned char uchar;
typedef unsigned int uint;

uchar *primeNumbersBySieveOfEratosthenes(size_t n);
uint prime_numbers(uchar *num, size_t start, size_t end);

int
main(int argc, char *argv[])
{
	uint i;
	uint j;
	uchar *num = primeNumbersBySieveOfEratosthenes(SIZE);
	for (i = 0, j = 1000; j < SIZE; i += 1000, j += 1000)
	{
		printf("%d\n", prime_numbers(num, i, j));
	}

	getchar();
	return EXIT_SUCCESS;
}

uchar *
primeNumbersBySieveOfEratosthenes(size_t n)
{
	/* 初始化素数数组 */
	uchar* num = (uchar *)malloc(sizeof(uchar) * n);
	assert(num != NULL);
	for (size_t i = 2; i < n; ++i)
	{
		num[i] = TRUE;
	}
	/* 按照埃拉托斯特尼筛法，将为基数的倍数的所有数标记为非素数 */
	size_t i = 2;
	while (i * i <= n)
	{
		for (size_t c = 2, idx = 2 * i; idx < n; ++c, idx = i * c)
		{
			num[idx] = FALSE;
		}
		do
		{
			++i;
		} while (i * i <= n && num[i] == FALSE);
	}
	return num;
}

uint
prime_numbers(uchar *num, size_t start, size_t end)
{
	int i;
	uint count = 0;
	for (i = start; i < end; i++)
	{
		if (num[i] == TRUE)
		{
			count++;
		}
	}

	return count;
}