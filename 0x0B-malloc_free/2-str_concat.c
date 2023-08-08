#include "main.h"
#include <stdlib.h>

/**
* _strlen - A function that returns the length of a string
* @s: string to check
*
* Return: Always 0 (Success)
*/

int _strlen(char *s)
{
	int len = 0;
	char *start = s;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s = start;
	return (len);
}

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
	int i;
	int len_s1 = _strlen(s1);
	int len_s2 = _strlen(s2);
	int size = len_s1 + len_s2 + 1;
	char *str_ptr = malloc(sizeof(char) * size);

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; i < len_s1; i++)
	{
		str_ptr[i] = s1[i];
	}
	for (i = 0; i < len_s2; i++)
	{
		str_ptr[len_s1 + i] = s2[i];
	}
	str_ptr[size - 1] = '\0';

	return (str_ptr);
}
