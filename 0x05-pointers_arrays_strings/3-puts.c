#include "main.h"

/**
* _puts - A function that prints a string,
* followed by a new line to stdout.
* @str: parameter of type char
*
* Return: Void functions have no return
*/

void _puts(char *str)
{
	int len = 0;
	int count;
	int max;
	char *start = str;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	max = len;
	str = start;

	for (count = 0; count < max; count++)
	{
		if (*str != '\0')
		{
			_putchar(str[count]);
		}
	}
	_putchar('\n');
}
