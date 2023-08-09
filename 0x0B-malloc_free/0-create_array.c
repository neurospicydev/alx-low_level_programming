#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of characters
 * and initialises it with a specific character
 * @size: size of the memory to allocate to array
 * @c: character
 *
 * Return: Pointer to the array or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p1 = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (p1 == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		p1[i] = c;
		i++;
	}
	return (p1);
}
