#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int strlen(char *str);
char *strstr(char *str, char const *substr);
int del_substr(char *str, char const *substr);

int
main(void)
{
	char *str = "abcdefg";
	char *substr = "cde";
	printf("%d\n", strlen(str));
	if (del_substr(str, substr)) {
		printf("%s\n", str);
	}

	getchar();
	return EXIT_SUCCESS;
}

int
del_substr(char *str, char const *substr)
{
	if (strstr(str, substr) == NULL) {
		return 0;
	}
	char *p1 = strstr(str, substr);
	char *p2 = p1 + strlen(substr);
	char *p_stop = p2 - 1;
	while (p1 < p_stop && *p2 != '\0') {
		*p1++ = *p2++;
	}
	if (p1 <= p_stop) {
		*p1 = '\0';
	}
	return 1;
}

char *
strstr(char *str, char const *substr)
{
	char *p_str;
	char *p_substr;
	while (*str != '\0') {
		while (*str != *substr && *str != '\0') {
			str++;
		}
		p_str = str;
		p_substr = substr;
		while (*p_str == *p_substr && *p_str != '\0' && *p_substr != '\0') {
			p_str++;
			p_substr++;
		}
		if (*p_substr == '\0') {
			return str;
		}
		if (*p_str == '\0') {
			return NULL;
		}
		str++;
	}
}

int
strlen(char *str)
{
	int count = 0;
	while (*str++ != '\0') {
		count++;
	}

	return count;
}