#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 1000

typedef struct string_node
{
	char data[MAX_LEN];  /* string */
	unsigned short int len;  /* string length */
	struct string_node *next;  /* pointer to next string node */
	struct string_node *prior;  /* pointer to prior string node */
} string_node;

int
main(void)
{
	char input[MAX_LEN] = { 0 };
	int len = 0;
	string_node *p = (string_node*)malloc(sizeof(string_node));
	string_node *tmp = NULL;
	string_node *p_max = NULL;
	string_node *p_last = p;  /* pointer to the last string node */

	/*
	** init the first string node
	*/
	strcpy(p->data, "");
	p->len = 0;
	p->next = NULL;
	p->prior = NULL;


	while (gets(input) != NULL) {
		len = strlen(input);

		tmp = (string_node*)malloc(sizeof(string_node));
		strcpy(tmp->data, input);
		tmp->len = len;
		tmp->next = NULL;
		tmp->prior = p_last;
		p_last->next = tmp;
		p_last = tmp;
		tmp = NULL;

		if (len > p_last->prior->len) {
			p_max = p_last;
		}
	}
	printf("%s\n", p_max->data);

	getchar();

	return EXIT_SUCCESS;
}