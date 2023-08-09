#include "main.h"
#include <stdlib.h>

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
	int i = 0;
	int j = 0;
	int **arr;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			return (NULL);
		}
	}
	while (i < height)
	{
		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}
