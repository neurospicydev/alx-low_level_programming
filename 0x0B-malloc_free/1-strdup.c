#include "main.h"

/**
 * _strdup - A function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter
 * @str: string to duplicate
 *
 * Return: a pointer to the duplicated string, or NULL if
 * insufficient memory was available.
 */

char *_strdup(char *str)
{
	char *p;
	int i = 0;
	int len = _strlen(str);

	p = malloc((len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);
	if (p == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}

/**
 * _strlen - A function that returns the length of a string.
 * @s: string parameter of type char.
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

