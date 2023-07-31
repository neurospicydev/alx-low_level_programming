#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: pointer variable to destination address to be n bytes onto
 * @src: pointer variable to source address to copy n bytes from
 * @n: Number of bytes to copy
 *
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (*src != '\0')
	{
		i = 0;
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
		src++;
	}
	return (dest);
}
