#include "main.h"
#include <stdio.h>

/**
* _isdigit - A function that checks for a digit
* 0 through 9
* @n: parameter of type integer
*
* Return: 1 if n is a digit, and 0 otherwise
*/

int _isdigit(int n)
{
	int i = '0'; /* range to traverse for check */
	int isdigit = 0; /* init var to boolean value to 0 */

	for (; i <= '9'; i++)
	{
		if (n == i)
		{
			isdigit = 1;
			break; /* break out of loop if digit */
		}
	}
	return (isdigit);
}
