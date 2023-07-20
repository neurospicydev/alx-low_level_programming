#include "main.h"

/**
* print_numbers - A function that prints numbers from 0 to 9
* using custom function _putchar, followed by a new line
*
* Return: void function requires no return statement
*/

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
