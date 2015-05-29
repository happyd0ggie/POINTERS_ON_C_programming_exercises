#define _CRT_SECURE_NO_WARNINGS
#define NUL '\0'
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int
ascii_to_integer(char *string);

int
main(int argc, char *argv[])
{
	char *string = "12332";
	printf("%d\n", ascii_to_integer(string));
	getchar();

	return EXIT_SUCCESS;
}

int
ascii_to_integer(char *string)
{
	int result = 0;

	while (*string != NUL) {
		if (!isdigit(*string)) {
			return 0;
		}
		result = result * 10 + (*string - '0');
		string++;
	}

	return result;
}