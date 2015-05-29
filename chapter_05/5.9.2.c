#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int
encrypt(int ch, int base);

int
main(int argc, char *argv[])
{
	char ch;
	while (scanf("%c", &ch) != EOF) {
		if (islower(ch)) {
			ch = encrypt(ch, 'a');
		}
		if (isupper(ch)) {
			ch = encrypt(ch, 'A');
		}
		putchar(ch);
	}

	return EXIT_SUCCESS;
}

int
encrypt(int ch, int base)
{
	ch -= base;
	ch += 13;
	ch %= 26;
	return ch + base;
}