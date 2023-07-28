#include "main.h"

/**
 * _encode_character - A function that encodes a string
 * @c: Parameter, pointer variable of type char to encode
 *
 * Return: Encoded string.
 */

char _encode_character(char c)
{
	char alpha[] = "AaEeOoTtLl4433007711";
	int i = 0;

	while (alpha[i] != '\0' && i < 10) /* i < 10 to control overflow */
	{
		if (c == alpha[i])
		{
			return (alpha[i + 10]);
		}
		i++;
	}
	return (c);
}

/**
 * leet - A function that encodes a string into 1337
 * @str: Parameter, pointer variable of type char to encode
 *
 * Return: Encoded string.
 */

char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = _encode_character(str[i]);
		i++;
	}
	return (str);
}
