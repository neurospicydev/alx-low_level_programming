#include "main.h"

/**
 * string_toupper - A function that changes all lowercase letters
 * of a string to uppercase.
 * @s: parameter/ pointer of type char
 *
 * Return: Uppercase letters after transform.
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32; /* using ascii table to transform */
		}
	}
	return (s);
}
