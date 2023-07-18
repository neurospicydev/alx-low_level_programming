#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet
 * in lowercase 10 times using custom funtion _putchar
 * only twice.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int alpha;

	while (i <= 9)
	{
		alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
