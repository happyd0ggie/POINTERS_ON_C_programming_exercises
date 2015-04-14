#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_DEEPTH 1000

int
main(void)
{
	char stack[MAX_DEEPTH];
	int top = -1;
	int ch;

	while ((ch = getchar()) != EOF) {
		switch (ch) {
		case '{':
			stack[++top] = '{';
			break;
		case '}':
			stack[top--] = '0';
			break;
		default:
			break;
		}
	}

	if (top == -1) {
		printf("correct\n");
	}
	else {
		printf("not correct\n");
	}

	getchar();

	return EXIT_SUCCESS;
}