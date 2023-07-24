#include "main.h"

/**
* print_rev - A function that prints a string
* followed by a new line
* @s: pointer parameter of type char
*
* Return: Void functions have no return value
*/

void print_rev(char *s)
{
	int len = 0;
	int count;
	char *start = s;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	count = len;
	s = start;
	for (; count >= 0; count--)
	{
		if (*s != '\0')
		{
			_putchar(s[count]);
		}
	}
	_putchar('\n');
}
