#include <stdio.h>

/**
* main - A program that prints all the possible different
* combinations of two digits, and only print the smallest
* combination of the two digits
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int ones, tens; /* ones and tens place */

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = (tens + 1); ones <= '9'; ones++) /* filter duplicates */
		{
			putchar(tens);
			putchar(ones);

			if (tens != '8' || ones != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
