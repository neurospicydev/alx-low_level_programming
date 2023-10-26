#include "main.h"

int is_divisible(int num, int div);

/**
 * is_prime_number - A function that returns a boolean if a number
 * is prime or not
 * @n: Integer to check if prime or not
 *
 * Return:0 if not prime, 1 if prime.
 */

int is_prime_number(int n)
{
	if (n <= 1 || (n != 2 && n % 2 == 0))
	{
		return (0);
	}
	if (is_divisible(n, n - 1))
	{
		return (0);
	}
	return (1);
}

/**
 * is_divisible - A function that checks if a number is divisible
 * by a number other than 1 and itself
 * @num: number to check
 * @div: divisor
 *
 * Return: 1 if divisble, 0 otherwise
 */
int is_divisible(int num, int div)
{
	if (div <= 1)
		return (0); /* Not divisible */
	if (num % div == 0)
		return (1); /* divisible */
	/* recursively check if num is divisible by another number but 1 & itself */
	return (is_divisible(num, div - 1));
}
