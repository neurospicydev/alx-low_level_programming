#include "main.h"
#include <stdio.h>

/**
 * cap_string - A function that capitalises all words of a string
 * @str: parameter, pointer of type char
 *
 * Return: String with all words capitalised
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& (str[i - 1] == ' '
			|| str[i - 1] == '.'
			|| str[i - 1] == '\n'
			|| str[i - 1] == '	'))
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
