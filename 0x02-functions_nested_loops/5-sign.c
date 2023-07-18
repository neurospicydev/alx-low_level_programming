#include "main.h"
/**
 * print_sign - A function that prints the sign of a number
 * @num: The number to check
 *
 * Return: 1 if the number is greater than zero and print +
 * 0 if the number is equal to zero and print 0
 * -1 if the number is less than zero, and print -.
 */

int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (num < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}
