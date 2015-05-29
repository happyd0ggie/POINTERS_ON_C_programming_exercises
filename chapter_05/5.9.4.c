#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <Windows.h>
#define MAX_LEN 64

void
set_bit(char bit_array[], unsigned bit_number);

void
clear_bit(char bit_array[], unsigned bit_number);

void
assign_bit(char bit_array[], unsigned bit_number, int value);

int
test_bit(char bit_array[], unsigned bit_number);

int
main(void)
{
	char bit_array[MAX_LEN + 1];
	int bit_number;
	int value;
	
	memset(bit_array, '0', MAX_LEN * sizeof(char));
	bit_array[MAX_LEN] = '\0';  /* Here is a trap, caution! */
	while (scanf("%d %d", &bit_number, &value) != EOF) {
		set_bit(bit_array, bit_number);
		printf("%s\n", bit_array);
	}

	return EXIT_SUCCESS;
}

/*
** Set specified bit position to 1
*/
void
set_bit(char bit_array[], unsigned bit_number)
{
	if (bit_number < 0 || bit_number >= MAX_LEN) {
		printf("Subscript out of boundary!\nNow exit...\n");
		Sleep(3000);
		exit(-1);
	}
	bit_array[bit_number] = '1';

	return;
}

/*
** Clear specified bit
*/
void
clear_bit(char bit_array[], unsigned bit_number)
{
	if (bit_number < 0 || bit_number >= MAX_LEN) {
		printf("Subscript out of boundary!\nNow exit...\n");
		Sleep(3000);
		exit(-1);
	}
	bit_array[bit_number] = '0';

	return;
}

/*
** Assign specified bit position to specified value
*/
void
assign_bit(char bit_array[], unsigned bit_number, int value)
{
	if (bit_number < 0 || bit_number >= MAX_LEN) {
		printf("Subscript out of boundary!\nNow exit...\n");
		Sleep(3000);
		exit(-1);
	}
	if (value == 0) {
		bit_array[bit_number] = '0';
	}
	else {
		bit_array[bit_number] = '1';
	}

	return;
}

/*
** Test specified bit position(zero or not)
*/
int
test_bit(char bit_array[], unsigned bit_number)
{
	if (bit_number < 0 || bit_number >= MAX_LEN) {
		printf("Subscript out of boundary!\nNow exit...\n");
		Sleep(3000);
		exit(-1);
	}
	if (bit_array[bit_number] != 0) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}