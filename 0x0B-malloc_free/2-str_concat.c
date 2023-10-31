#include "main.h"

/**
 * str_concat - A function that concatenates two strings
 * @s1: The destination string to append the source string
 * @s2: The source string that overwrites the terminating null byte
 * \0 at the end of s1, and then adds a terminating null byte
 *
 * Return: A pointer to a newly allocated space in memory
 * , or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int size;
	int i;
	int s1_length, s2_length;

	if (s1 == NULL || s2 == NULL)
		"";

	s1_length = _strlen(s1);
	s2_length = _strlen(s2);
	size = s1_length + s2_length + 1;
	p = malloc(size * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < s1_length; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i < s2_length; i++)
	{
		p[s1_length + i] = s2[i];
	}
	p[size - 1] = '\0';
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

	while (*s != '\0') /* null terminator in C */
	{
		len++;
		s++;
	}
	return (len); /* retun the length of the string */
}
