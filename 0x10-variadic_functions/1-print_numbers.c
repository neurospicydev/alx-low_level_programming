#include "variadic_functions.h"

/**
 * print_numbers - A function that prints numbers,
 * followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: variable number of arguments
 *
 * Return: void functions have no return value
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0, nums;
	va_list ap;

	if (separator == NULL)
		return;
	va_start(ap, n);

	for (; i < n; i++)
	{
		nums = va_arg(ap, unsigned int);
		printf("%d", nums);

		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
