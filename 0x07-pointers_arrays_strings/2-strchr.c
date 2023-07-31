#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @s: Pointer variable holding the address to the string s to be searched
 * @c: Character to search for in string s
 *
 * Return: A pointer to the first occurrence of the character c
 * in the string s or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
