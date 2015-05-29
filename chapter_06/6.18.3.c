#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int strlen(char *string);
void reverse_string(char *string);

int
main(int argc, char *argv[])
{
	char string[] = "abcdefg";
	printf("%s\n", string);
	reverse_string(string);
	printf("%s\n", string);

	return EXIT_SUCCESS;
}

void reverse_string(char *string)
{
	char ch;
	char *p1 = string;
	char *p2 = p1 + strlen(string) - 1;
	while (p1 < p2) {
		ch = *p1;
		*p1 = *p2;
		*p2 = ch;
		p1++;
		p2--;
	}
	return;
}

int
strlen(char *string)
{
	int count = 0;
	while (*string++ != '\0') {
		count++;
	}
	return count;
}