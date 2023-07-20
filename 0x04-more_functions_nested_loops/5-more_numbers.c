#include "main.h"

/**
* more_numbers - a function that prints 10 times the numbers
* from 0 to 14, followed by a new line
* Only allowed the 3 uses of the custom function _putchar
*/

void more_numbers(void)
{
	int n = 0;
	int m;

	while (n < 10)
	{
		m = 0;
		while (m <= 14)
		{
			if (m < 10)
			{
				_putchar(m + '0');
			}
			else
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			m++;
		}
		_putchar('\n');
		n++;
	}
}
