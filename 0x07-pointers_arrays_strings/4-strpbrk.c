#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: Pointer variable holding the address to the string s to be searched
 * @accept: Pointer variable holding address to the string to be matched
 *
 * Return: A pointer to the first byte s that matches one of the
 * bytes in s or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return ((void *) 0);
}
