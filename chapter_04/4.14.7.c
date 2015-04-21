#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void
deblank(char string[]);

int
main(void)
{
	char string[] = "ab  cd e   f.g  hi";
	printf("%s\n", string);
	deblank(string);
	printf("%s\n", string);

	return EXIT_SUCCESS;
}

void
deblank(char string[])
{
	int i = 0;  /* move forward at least once a time */
	int j = 0;  /* move forward once a time */

	while (string[i] != '\0')
	{
		if (string[i] != ' ') {
			string[j] = string[i];
			i++;
			j++;
		}
		else if (string[i] == ' ' && string[i + 1] != ' ') {
			string[j] = string[i];
			i++;
			j++;
		}
		else {
			string[j] = string[i];
			i++;
		}
	}
	string[j] = '\0';
}