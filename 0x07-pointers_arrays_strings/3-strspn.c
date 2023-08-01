#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: Pointer of string to be scanned
 * @accept: Pointer containing list of chars to match in s
 *
 * Return: The number of bytes in the initial segment s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	unsigned int i;
	unsigned int string_match;

	while (*s != '\0')
	{
		string_match = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				string_match = 1;
				break;
			}
		}
		if (string_match)
		{
			len++;
		}
		else
		{
			break;
		}
		s++;
	}
	return (len);
}
