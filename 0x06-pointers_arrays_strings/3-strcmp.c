#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * @s1: first pointer parameter of type char
 * @s2: second pointer parameter of type char
 *
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}

	/* return ascii difference after converting *char to unsigned *char */
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
