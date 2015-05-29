#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char *find_char(char const *source, char const *chars);

int
main(void)
{
	char *source = "ABbcDEFqwer";
	//char *source = "ABbcD";
	char *chars = "XRCQEF";

	char *result = find_char(source, chars);
	if (result != NULL) {
		printf("%s\n", result);
	}
	else {
		printf("NOT FOUND!\n");
	}
	getchar();
	
	return EXIT_SUCCESS;
}

char *find_char(char const *source, char const *chars)
{
	char *p_source = source;
	char *p_chars = chars;

	if (p_source == NULL || p_chars == NULL) {
		return NULL;
	}
	while (*p_source != '\0') {
		while (*p_chars != '\0') {
			if (*p_source == *p_chars) {
				return p_source;
			}
			p_chars++;
		}
		p_chars = chars;
		p_source++;
	}

	return NULL;
}