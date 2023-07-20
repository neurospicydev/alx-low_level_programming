#include "main.h"

/**
* print_triangle - A function that prints a triangle pattern
* followed by a new line
* @size: size of the triangle
*
* Return: void functions require no return statement
*/

void print_triangle(int size)
{
	int l;
	int w;
	int s = size - 1; /* control the spaces printed */

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (w = 0; w < size; w++)
			{
				if (w < s)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			s--; /* decrement s to control space on next line */
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
