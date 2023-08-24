#include "function_pointers.h"
#include <stdlib.h>

/**
 * _compare - A function that compares numbers
 * @a: first number to compare
 * @b: second number to compare
 * Return: Always 0 (Success)
 */

int _compare(const void *a, const void *b)
{
	return ((*(int *)a) == (*(int *)b));
}

/**
 * int_index - A function that searches for an integer
 * @array: Pointer to array to search
 * @size: Number of elements in the array
 * @cmp: Pointer to a function
 *
 * Return: Index of the first element for which cmp does not return 0
 * or -1 if no element matches or size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
