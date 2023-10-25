#include "main.h"

/**
 * _puts_recursion - A function that prints a string, followed by a newline
 * @s: A pointer to a string
 *
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
