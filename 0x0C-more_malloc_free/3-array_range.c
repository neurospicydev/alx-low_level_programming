#include "main.h"

/**
 * array_range - A function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array, or NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int *p;
	int i;
	int size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1; 
	p = (int *)malloc(size * sizeof(int));
	if (p == NULL)
		return (NULL);
	for(i = 0; i < size; i++)
	{
		p[i] = min;
		min = min + 1;
	}
	return (p);
}
