#include "main.h"

/**
* print_diagonal - A function that draws a diagonal on the terminal
* @n: number of times the character \ is printed
*
* Return: void functions do not return anything
*/

void print_diagonal(int n)
{
	int l;
	int w;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (w = 0; w < n; w++)
			{
				if (w == l)
				{
					_putchar('\\');
				}
				else if (w < l)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
