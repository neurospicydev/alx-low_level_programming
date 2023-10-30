#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2D grid/ array of integers
 * @grid: array memory to be freed.
 * @height: height a.k.a column of the 2D array/grid
 *
 * Return: void functions do not have a return value
 */

void free_grid(int **grid, int height)
{
	int **array = grid;
	int i = 0;

	if (array == NULL)
		return;
	while (i < height)
	{
		free((int *)array[i]);
		i++;
	}
	free(array);
}
