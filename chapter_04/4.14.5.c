/*
** Read line from standard input and print line if and only if it appears more
** than twice and is adjecent with another same line
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 128

int
main(void)
{
	char pre_input[MAX_LEN];
	char input[MAX_LEN];

	gets(pre_input);
	while (gets(input) != 0) {
		if (0 == strcmp(input, pre_input)) {
			printf("%s\n", pre_input);
			while (gets(input) != 0) {
				if (0 != strcmp(input, pre_input)) {
					strcpy(pre_input, input);
					break;
				}
			}
		}
		else {
			strcpy(pre_input, input);
		}
	}

	return EXIT_SUCCESS;
}
