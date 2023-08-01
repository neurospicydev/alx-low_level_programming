#include "main.h"

/**
 * print_chessboard - A function that prints the chessboard
 * @a: A pointer with the memory location to the first
 * element of a 2D array
 *
 * Return: Void functions return nothing
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j = 0;

	while (j < 8)
	{
		i = 0;
		while (i < 8)
		{
			_putchar(a[j][i]);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
