#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int line_num = 1;
	int ch;

	while ((ch = getchar()) != EOF) {
		printf("%d: ", line_num);
		while (ch != '\n') {
			putchar(ch);
			ch = getchar();
		}
		printf("\n");
		line_num++;
	}

	getchar();
	return EXIT_SUCCESS;
}