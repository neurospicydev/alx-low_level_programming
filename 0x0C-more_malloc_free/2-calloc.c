#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an array using malloc
 * @nmemb: The destination char pointer variable to append source string
 * @size: size of bytes to allocate.
 *
 * Return: Void functions have no return value.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
