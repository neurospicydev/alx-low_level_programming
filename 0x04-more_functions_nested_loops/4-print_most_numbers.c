#include "main.h"

/**
* print_most_numbers - A function that prints the numbers from 0 to 9
* using a custom function _putchar, followed by a new line
*
* Return: a void function requires no return statement
*/

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		_putchar(n + '0');
	}
	_putchar('\n');
}
