#include "main.h"

/**
 * _strncpy - A function that copies a string
 * @dest: destination string copied from src
 * @src: Source string of type char to copy onto dest
 * @n: the number of bytes to copy from src to dest
 *
 * Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0; /* iterator */

	for (; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i]; /* copy from src to dest */
	}

	for (; i < n; i++)
	{
		dest[i] = '\0'; /* manually handle null termination */
	}
	return (dest);
}
