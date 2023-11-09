#include "variadic_functions.h"

/**
 * sum_them_all - A function that sums up all its parameters
 * @n: number of integers to be counted and summed
 * @...: variable number of arguments
 *
 * Return: sume of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int total = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);

	else
	{
		for (i = 0; i < n; i++)
			total += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (total);
}
