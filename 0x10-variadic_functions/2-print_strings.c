#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings,
 * followed by a new line
 *
 * @separator: pointer to the address of the string
 * to be printed between the strings
 * @n: number of strings passed to the function
 * @...: variable number of arguments
 *
 * Return: void functions have no return value
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		printf("%s", str);

		if (str == NULL)
			printf("(nil)");

		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
