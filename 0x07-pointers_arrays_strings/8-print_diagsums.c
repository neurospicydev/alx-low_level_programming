#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum of two diagonals
 * of a square matrix of integers
 * @a: Pointer, holding the memory address to the first element
 * of a 2D array
 * @size: Size of the array
 *
 * Return: Void functions have no return value
 */

void print_diagsums(int *a, int size)
{
	int sum = 0; /* calc sum of primary diagonal */
	int sum1 = 0; /* calc sum of secondary diagonal */
	int i;

	for (i = 0; i < size; i++)
	{
		sum += a[i * size + i]; /* add from top-l to btm-r */

		sum1 += a[i * size + (size - i - 1)]; /* sum top-r to btm-l */
	}
	printf("%d, %d\n", sum, sum1);
}
