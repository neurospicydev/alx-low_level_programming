#include "main.h"

/**
 * print_binary - A function that prints the binary
 * representation of a number
 *
 * @n: number
 *
 * Return: Void functions have no return value
 */

void print_binary(unsigned long int n)
{
	char b[MAX_BINARY_LEN];
	unsigned long int rmdr = 0;
	int i = 0;
	int left_side, right_side;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n > 0)
	{
		rmdr = n % 2; /*keep track of remainder*/
		b[i] = rmdr + '0';
		n /= 2; /* divide n by 2 until 0 */
		i++;
	}
	b[i] = '\0'; /* null terminator */

	/* reverse string for correct binary representation */
	left_side = 0;
	right_side = i - 1;

	while (left_side < right_side)
	{
		char tmp = b[left_side];

		b[left_side] = b[right_side];
		b[right_side] = tmp;
		left_side++;
		right_side--;
	}
	/* print binary representation */
	i = 0;
	while (b[i] != '\0')
	{
		_putchar(b[i]);
		i++;
	}
}
