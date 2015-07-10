#define _CRT_SECURE_NO_WARNINGS
#include <stdarg.h>
#define NUL '\0'

void
printf(char const *format, ...);

void
print_integer(int i);

void
print_float(float f);

int
main(int argc, char **argv)
{
	printf("string = %s\n", "sheng");
	printf("int = %d\n", 2);
	printf("char = %c\n", 'c');
	printf("float = %f\n", 2.2);

	getchar();
	return 0;
}

void
printf(char const *format, ...)
{
	va_list va;
	char ch;
	char *str;
	va_start(va, format);

	while ((ch = *format++) != NUL)
	{
		if (ch != '%')
		{
			putchar(ch);
			continue;
		}
		switch (*format != NUL ? *format++ : NUL)
		{
		case 'd':
			print_integer(va_arg(va, int));
			break;
		case 'f':
			print_float(va_arg(va, float));
			break;
		case 'c':
			putchar(va_arg(va, char));
			break;
		case 's':
			str = va_arg(va, char *);
			while (*str != NUL)
			{
				putchar(*str++);
			}
			break;
		}
	}
	va_end(va);
}

void
print_integer(int i)
{
	printf("printing integer ... OK.");
	return;
}

void
print_float(float f)
{
	printf("printing float ... OK.");
	return;
}