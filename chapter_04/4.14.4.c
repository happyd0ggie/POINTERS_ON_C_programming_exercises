/*
** Copy exactly n characters from source to destination
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void
copy_n(char dst[], char src[], int n);

int
main(void)
{
	char src[] = "sheng";
	char dst[] = "abc";

	copy_n(dst, src, 6);
	printf("%s\n", dst);

	return EXIT_SUCCESS;
}

void
copy_n(char dst[], char src[], int n)
{
	int dst_len = strlen(dst);
	int src_len = strlen(src);
	int i;

	for (i = 0; i < n && i < src_len && i < dst_len; ++i) {
		dst[i] = src[i];
	}
	for (; i < dst_len; ++i) {
		dst[i] = '\0';
	}
	dst[i] = '\0';
}