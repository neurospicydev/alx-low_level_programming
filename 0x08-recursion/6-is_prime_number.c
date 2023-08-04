#include "main.h"
int is_divisible(int num, int div);

/**
 * is_prime_number - A function that returns true (1)
 * if input integer is a prime number
 * @n: Integer variable to check
 *
 * Return: 1 if n is a prime number, otherwise 0.
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	return (is_divisible(n, div));
}

/**
 * is_divisible - A function that checks for prime
 * @num: Integer variable to check
 * @div: The number used to check for prime
 *
 * Return: 1 if num is divisible, or 0 otherwise.
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
	{
		return (0);
	}
	if (div == num / 2)
	{
		return (1);
	}
	return (is_divisible(num, div + 1));
}
