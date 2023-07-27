#include "main.h"

/**
 * check_for_separator - A function that checks for specific seperators
 * of letters
 * @c: parameter, pointer of type char
 *
 * Return: Boolean
 */

int check_for_separator(char c)
{
	char sep[13] = {' ', '\t', ',', ';', '.',
			'!', '?', '"', '(', ')', '\n', '{', '}'};
	int i = 0;

	for (; i < 13; i++)
	{
		if (c == sep[i])
		{
			return (1);
		}
	}
	return (0);
}

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
			&& check_for_separator(str[i - 1]))
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
