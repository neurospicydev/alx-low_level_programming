#include "main.h"

/**
* print_line - A function that draws a straight line
* in the terminal using the custom funtion _putchar
* @n: parameter of type integer
*
* Return: _ multiplied n times if n is greater than zero,
* otherwise a new line
*/

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		if (n <= 0)
		{
			_putchar('\n');
		}
		n--;
	}
	_putchar('\n');
}
