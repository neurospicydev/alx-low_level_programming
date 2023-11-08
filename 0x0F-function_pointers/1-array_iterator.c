#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function
 * given as a parameter on each element of an array.
 * @array: pointer to an array of elements of type int
 * @size: size of the array
 * @action: pointer to a function that takes one argument
 * of type int, and returns nothing
 *
 * Return: void functions have no return value
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		(*action)(*array++);
		i++;
	}
}
