#include "main.h"

/**
 * _puts_recursion - A function that prints a string, followed
 * by a new line.
 * @s: pointer variable
 *
 * Return: void functions have no return value
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
