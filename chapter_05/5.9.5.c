#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
store_bit_field(int original_value, int value_to_store, unsigned starting_bit, unsigned ending_bit);

int
main(void)
{
	int original_value;
	int value_to_store;
	int starting_bit;
	int ending_bit;
	int result;

	while (scanf("%x %x %d %d", &original_value, &value_to_store, &starting_bit, &ending_bit) != EOF) {
		result = store_bit_field(original_value, value_to_store, starting_bit, ending_bit);
		printf("%x\n", result);
	}

	return EXIT_SUCCESS;
}

int
store_bit_field(int original_value, int value_to_store, unsigned starting_bit, unsigned ending_bit)
{
	unsigned int mask = (unsigned int)(~0);
	int i;

	/*
	** Create a mask
	*/
	mask = ~mask;
	for (i = ending_bit; i <= starting_bit; ++i) {
		mask |= 1 << (i - 1);
	}

	/*
	** Clear the field in the original value
	*/
	original_value &= ~mask;

	/*
	** Shift the value to store to the right position
	*/
	value_to_store <<= ending_bit;

	/*
	** Mask excess bits off of the value, and store it
	*/
	original_value |= value_to_store & mask;

	return original_value;
}