#include "main.h"

/**
* print_square - A function that prints a square pattern
* followed by a new line
* @size: size of the square used to print
*
* Return: void functions require no return statement
*/

void print_square(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
