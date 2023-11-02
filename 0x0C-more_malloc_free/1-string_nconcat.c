#include "main.h"

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: pointer to an array of characters (1st string)
 * @s2: pointer to an array of characters (2nd string)
 * @n: unsigned integer
 *
 * Return: a pointer to a newly allocated space in memory
 * followed by the first n bytes of s2, and null terminated,
 * or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *dest;
	unsigned int s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	if (n >= s2_len)
		n = s2_len;
	dest = (char *)malloc(sizeof(char) * (s1_len + n) + 1);

	if (dest == NULL)
	{
		return (NULL);
	}

	for (; i < s1_len; i++)
	{
		dest[i] = s1[i];
	}
	for (; j < n; j++, i++)
	{
		dest[i] = s2[j];
	}
	dest[i] = '\0';
	return (dest);
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
