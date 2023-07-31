#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: pointer variable to the address of memory area
 * @b: constant byte
 * @n: Number of bytes of memory area pointed to by s
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
