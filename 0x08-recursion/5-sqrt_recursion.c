#include "main.h"

int _sqrt_check(int num, int root);

/**
 * _sqrt_recursion - A function that returns the natural square root
 * of a number
 * @n: Integer to compute the natural square root
 *
 * Return: -1 if n does not have a natural square root, otherwise return
 * its natural square root. Always 0 (Success).
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (_sqrt_check(1, n));
}

/**
 * _sqrt_check - A function that checks if a number has a
 * natural square root
 * @num: number to compute its square root
 * @root: value of the square root
 *
 * Return: Always 0 (Success)
 */

int _sqrt_check(int num, int root)
{
	if (num > root)
	{
		return (-1);
	}
	else if (num * num == root)
	{
		return (num);
	}
	return (_sqrt_check(num + 1, root));
}
