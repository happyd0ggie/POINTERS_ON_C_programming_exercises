#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char *digits[] = {
	"", "ONE ", "TWO ", "THREE ", "FOUR ", "FIVE ", "SIX ", "SEVEN ", "EIGHT ",
	"NINE ", "TEN ", "ELEVEN ", "TWELVE ", "THIRTEEN ", "FOURTEEN ", "FIFTEEN ",
	"SIXTEEN ", "SEVENTEEN ", "EIGHTEEN ", "NINETEEN "
};

static char *tens[] = {
	"", "", "TWENTY ", "THIRTY ", "THIRTY ", "FORTY ", "FIFTY ", "SIXTY ",
	"SEVENTY ", "EIGHTY ", "NINETY "
};

static char *magnitudes[] = {
	"", "THOUSAND ", "MILLION ", "BILLION "
};

static void
do_one_group(unsigned int amount, char *buffer, char **magnitude);

void
written_amount(unsigned int amount, char *buffer);

int
main(int argc, char **argv)
{
	char *result[1024];
	written_amount(2134, result);
	printf("%s\n", result);

	getchar();
	return EXIT_SUCCESS;
}

void
written_amount(unsigned int amount, char *buffer)
{
	if (amount == 0)
	{
		strcpy(buffer, "ZERO ");
	}
	else
	{
		*buffer = '\0';
		do_one_group(amount, buffer, magnitudes);
	}
	return;
}

static void
do_one_group(unsigned int amount, char *buffer, char **magnitude)
{
	int value;
	value = amount / 1000;
	if (value > 0)
	{
		do_one_group(value, buffer, magnitude + 1);
	}

	amount %= 1000;
	value = amount / 100;
	if (value > 0)
	{
		strcat(buffer, digits[value]);
		strcat(buffer, "HUNDRED ");
	}
	value = amount % 100;
	if (value >= 20)
	{
		strcat(buffer, tens[value / 20]);
		value %= 10;
	}
	if (value > 0)
	{
		strcat(buffer, digits[value]);
	}
	if (amount > 0)
	{
		strcat(buffer, *magnitude);
	}
}