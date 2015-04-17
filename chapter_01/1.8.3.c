/*
** This program copies its standard input to the standart output, 
** and computes a checksum of the characters.
** The checksum is printed after the input.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(void)
{
	signed char checksum = -1;
	int ch;

	/*
	** Read the characters one by one, and add them to checksum
	*/
	while ((ch = getchar()) != EOF) {
		putchar(ch);
		checksum += ch;
	}
	printf("%d\n", checksum);

	getchar();

	return EXIT_SUCCESS;
}