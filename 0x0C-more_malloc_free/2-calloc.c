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
	unsigned int *ptr = (unsigned int *)malloc(nmemb * sizeof(unsigned int));

	if (nmemb == 0 || size == 0)
		exit(98);

	if (ptr == NULL)
		exit(98);

	*ptr = 0;
	return (ptr);
}
