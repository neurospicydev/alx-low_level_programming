#include "main.h"
int _sqrt_check(int r, int root);

/**
 * _sqrt_recursion - A function that return the natural square root
 * of a number.
 * @n: pointer variable,number to compute sqrt
 *
 * Return: Square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_check(1, n));
}

/**
 * _sqrt_check - A function that checks if a number has
 * natural square root
 * @i: pointer variable,number to compute sqrt
 * @root: vlaue of the square root
 * Return: square root
 */

int _sqrt_check(int i, int root)
{
	if (i > root)
	{
		return (-1);
	}
	else if (i * i == root)
	{
		return (i);
	}
	return (_sqrt_check(i + 1, root));
}

