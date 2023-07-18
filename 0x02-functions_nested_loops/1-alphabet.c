#include "main.h"

/**
 * main - a function that prints the alphabet
 * in lower case followed by a new line using
 * custom _putchar function only twice
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
	return (0);
}
