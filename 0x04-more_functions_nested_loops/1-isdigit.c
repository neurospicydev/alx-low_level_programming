#include "main.h"
#include <stdio.h>

/**
* _isdigit - A function that checks for a number
* 0 through 9
* @n: integer to check
*
* Return: 1 if n is a number, and 0 otherwise
*/

int _isdigit(int n)
{
	if (!(n >= 'a' && n <= 'z') && !(n >= 'A' && n <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	printf("\n");

}
