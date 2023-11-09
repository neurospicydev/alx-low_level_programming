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

<<<<<<< HEAD
=======
	if (separator == NULL)
		return;
>>>>>>> 34bb775ce74fb92ab0fcfbdc2a3b837447db5818
	va_start(ap, n);

	for (; i < n; i++)
	{
		nums = va_arg(ap, unsigned int);
		printf("%d", nums);

<<<<<<< HEAD
		if (separator == NULL)
			continue;
=======
>>>>>>> 34bb775ce74fb92ab0fcfbdc2a3b837447db5818
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
