#include "main.h"

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
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);
	do {
		p[i] = c;
		i++;
	} while (i < size);
	return (p);
}
