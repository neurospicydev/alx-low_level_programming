#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - A function that returns a pointer to a 2D
 * array of integers
 * @width: width a.k.a row of the array
 * @height: height a.k.a column of the array
 *
 * Return: NULL on failure of if width or height is <= 0.
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr[i]);
			return (NULL);
		}
	}

	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}
