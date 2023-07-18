#include "main.h"

/**
 * times_table - A function that prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i = 0;
	int j;
	int num;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			num = j * i;
			if (j == 0)
			{
				_putchar(num + '0');
			}

			else if (num <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(num + '0');
			}

			else if (num > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
