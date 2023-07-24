#include "main.h"

/**
* puts_half - A function that prints half of a string
* followed by a new line.
* @str: parameter/variable pointer of type char
*
* Return: Void functions have no return value
*/

void puts_half(char *str)
{
	int n, i;
	int len = 0;
	char *start = str;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str = start;
	if (len % 2 != 0)
	{
		n = ((len - 1) / 2);
	}
	else
	{
		n = (len / 2);
	}

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
