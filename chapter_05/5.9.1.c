#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int
main(int argc, char *argv[])
{
	char ch;
	while (scanf("%c", &ch) != EOF) {
		putchar(tolower(ch));
	}

	return EXIT_SUCCESS;
}
