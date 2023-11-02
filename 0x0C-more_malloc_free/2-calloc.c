#include "main.h"

/**
 * _calloc - A function that allocates memory for an array, using malloc
 * @nmemb: array of elements (a.k.a number of elements)
 * @size: size of the memory to be allocated
 *
 * Return: a pointer to the allocated memory, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		*(ptr + i) = 0;
	}
	return (ptr);
}
