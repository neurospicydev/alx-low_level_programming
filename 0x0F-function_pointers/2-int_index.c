#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: pointer to an array of elements of type integer
 * @size: size of the array
 * @cmp: pointer to a function that takes one argument
 * of type integer and returns an integer.
 *
 * Return: index of the first element for which the cmp
 * function does not return 0, or -1 if no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if ((*cmp)(*array++) == 1)
			return (i);
		i++;
	}
	return (0);

}
