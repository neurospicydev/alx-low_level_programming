#include "main.h"

/**
 * _pow_recursion - A function that returns x raised to the power of y
 * @x: the base
 * @y: the exponent
 *
 * Return: -1 on error, value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
