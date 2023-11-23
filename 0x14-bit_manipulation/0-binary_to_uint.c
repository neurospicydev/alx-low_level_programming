#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number
 * to a unsigned integer.
 *
 * @b: Pointer to a string of 0 and 1 characters
 *
 * Return: The converted number, or 0 if b is NULL
 * or if there is one or more chars in the string b
 * that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	const char *c = b;
	int i;
	int len = 0;
	unsigned int uint = 0;

	if (b == NULL)
		return (0);
	while (*c != '\0')
	{
		len++;
		c++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		else if (b[i] == '1')
		{
			uint += 1 << (len - 1 - i);
		}
	}
	return (uint);
}

