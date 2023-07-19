#include "main.h"

/**
 * print_times_table - A function that prints n times table, startting with 0
 * @num: The number of type int
 */

void print_times_table(int num)
{
	int row;
	int col;
	int product;

	if (num >= 0 && num <= 15)
	{
		for (row = 0; row <= num; row++)
		{
			for (col = 0; col <= num; col++)
			{
				product = (row * col);
				if (col == 0)
					_putchar('0' + product);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (product <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + product);
					}
					else if (product > 9 && product < 100)
					{
						_putchar(' ');
						_putchar('0' + (product / 10));
						_putchar('0' + (product % 10));
					}
					else if (product >= 100)
					{
						_putchar('0' + (product / 100));
						_putchar('0' + ((product / 10) % 10));
						_putchar('0' + (product % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
