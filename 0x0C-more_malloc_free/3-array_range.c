#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: first parameter
 * @max: second parameter
 *
 * Return: Pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr_to_array;
	int i, diff;

	if (min > max)
	{
		return (NULL);
	}
	diff = max - min;
	ptr_to_array = malloc(sizeof(int) * (diff + 1));
	if (ptr_to_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= diff; i++)
		ptr_to_array[i] = min++;
	return (ptr_to_array);
}
