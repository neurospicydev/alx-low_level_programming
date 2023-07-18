#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet
 * in lower case followed by a new line using
 * custom _putchar function only twice
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
