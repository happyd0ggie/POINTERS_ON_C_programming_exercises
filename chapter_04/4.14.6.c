/*
** Get a substring from a string start from specified position and copy specified characters
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 128

int
substr(char dst[], char src[], int start, int len);

int
main(void)
{
	char dst[MAX_LEN];
	char src[] = "abcdefghijklmnopqrstuvwxyz";
	int len = substr(dst, src, 0, 3);
	printf("%s\n", dst);

	return EXIT_SUCCESS;
}

int
substr(char dst[], char src[], int start, int len)
{
	unsigned int i;
	unsigned int count;
	if (start < 0 || len < 0 || start > strlen(src)) {
		strcpy(dst, "");
		return 0;
	}

	for (i = start, count = 0; i < strlen(src) - 1 && count < len; ++i, ++count) {
		dst[count] = src[i];
	}
	dst[count] = '\0';
	return count;
}