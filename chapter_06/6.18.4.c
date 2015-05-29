#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

char * primeNumbersBySieveOfEratosthenes(size_t n);

int
main(int argc, char *argv[])
{
	int i;
	char *num = primeNumbersBySieveOfEratosthenes(10000);
	for (i = 2; i <= 10000; ++i) {
		if (num[i] == TRUE) {
			printf("%7d ", i);
		}
	}

	return EXIT_SUCCESS;
}

char * primeNumbersBySieveOfEratosthenes(size_t n)
{
	// ��ʼ����������
	char* num = (char*)malloc(sizeof(char) * n);
	for (size_t i = 2; i < n; ++i) {
		num[i] = TRUE;
	}
	// ���հ�����˹����ɸ������Ϊ�����ı��������������Ϊ��������
	size_t i = 2;
	while (i * i <= n) {
		for (size_t c = 2, idx = 2 * i; idx < n; ++c, idx = i * c) {
			num[idx] = FALSE;
		}
		do {
			++i;
		} while (i * i <= n && num[i] == FALSE);
	}
	return num;
}