#include "main.h"

/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: unsigned integer to assign memory
 *
 * Return: void functions have no return value
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
