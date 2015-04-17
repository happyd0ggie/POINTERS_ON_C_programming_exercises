/*
** print the message "Hello world!" to the standard output
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	printf("Hello world!\n");

	getchar();  /* program pauses until hit enter key */

	return EXIT_SUCCESS;
}