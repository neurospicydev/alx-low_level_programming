#include "main.h"

/**
 * _strncat - A function that concatenates two strings
 * by using at most n bytes from source string
 * @dest: The destination char pointer variable to append source string
 * @src: The source char pointer variable which does not need to be
 * null-terminated if it has n or more bytes
 * @n: n bytes, length of source string
 *
 * Return: A pointer to destination string. Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i; /* iterator */

	while (dest[len]) /* calculate the length of dest */
	{
		len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i]; /* append characters in correct position */
	}
	dest[len + i] = '\0'; /* properly terminate dest string */
	return (dest);
}
