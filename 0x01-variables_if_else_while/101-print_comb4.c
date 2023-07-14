#include <stdio.h>

/**
* main - A program that prints all the possible different
* combinations of three digits, and only print the smallest
* combination of the three digits
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int ones, tens, hundreds; /* ones, tenth, and hundreth places */

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = (hundreds + 1); tens <= '9'; tens++) /* filter duplicates */
		{
			for (ones = (tens + 1); ones <= '9'; ones++) /* filter duplicates */
			{
				putchar(hundreds);
				putchar(tens);
				putchar(ones);

				if (hundreds != '7' || tens != '8' || ones != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
