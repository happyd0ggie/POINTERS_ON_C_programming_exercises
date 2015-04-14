#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(void)
{
	signed char checksum;
	int ch;

	while ((ch = getchar()) != EOF) {
		checksum = -1;
		while (ch != '\n') {
			checksum += (signed char)ch;
			putchar(ch);
			ch = getchar();
		}
		printf("\n");
		printf("%d\n", checksum);
	}

	getchar();

	return EXIT_SUCCESS;
}