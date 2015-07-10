#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci_recursion_times;

unsigned long long int
fibonacci(unsigned int n);

unsigned long long int
quick_fibonacci(unsigned int n);

int
main(void)
{
	int i;
	for (i = 1; i <= 50; i++)
	{
		fibonacci_recursion_times = 0;
		printf("fibonacci(%d) = %u ", i, fibonacci(i));
		printf("times: %u\n", fibonacci_recursion_times);
	}

	getchar();
	return EXIT_SUCCESS;
}

unsigned long long int
fibonacci(unsigned int n)
{
	fibonacci_recursion_times += 1;
	if (1 == n || 2 == n)
	{
		return 1;
	}
	else
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

unsigned long long int
quick_fibonacci(unsigned int n)
{
	unsigned long long int result;
	unsigned long long int previous_result;
	unsigned long long int next_result;

	result = previous_result = 1;
	while (n > 2)
	{
		n -= 1;
		next_result = previous_result;
		previous_result = result;
		result = previous_result + next_result;
		fibonacci_recursion_times += 1;
	}

	return result;
}