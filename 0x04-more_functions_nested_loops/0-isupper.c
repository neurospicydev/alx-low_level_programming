#include "main.h"

/**
* _isupper - A function that checks for uppercase character
*
* @n: parameter of type int
*
* Return: 1 if n is uppercase, 0 otherwise
*/

int _isupper(int n)
{
	int alpha = 'A';
	int isupper = 0;

	for (; alpha <= 'Z'; alpha++)
	{
		if (n == alpha)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
