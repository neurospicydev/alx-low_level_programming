#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number
 * @n: Integer
 *
 * Return: -1 on error, 0 if successful
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
