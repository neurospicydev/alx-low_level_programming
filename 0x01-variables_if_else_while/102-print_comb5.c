#include <stdio.h>

/**
* main - A program that prints all the possible combinations
* of 2 two-digit spaced and comma separated numbers without
* duplicates
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int ones;
	int tens;

	for (tens = 0; tens <= 98; tens++)
	{
		for (ones = tens + 1; ones <= 99; ones++)
		{
			putchar((tens / 10) + '0');
			putchar((tens % 10) + '0');
			putchar(' ');
			putchar((ones / 10) + '0');
			putchar((ones % 10) + '0');

			if (tens == 98 && ones == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
