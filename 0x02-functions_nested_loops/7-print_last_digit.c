#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 * @num: The number of type integer to compute and print its last digit
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int num)
{
	int x;

	if (num < 0)
	{
		x = -1 * (num % 10);
		_putchar(x + '0');
		return (x);
	}

	else
	{
		x = num % 10;
		_putchar(x + '0');
		return (x);
	}
}
