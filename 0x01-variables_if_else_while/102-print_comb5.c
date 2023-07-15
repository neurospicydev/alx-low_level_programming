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
	int tenz;
	int onez;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			for (tenz = tens; tenz <= '9'; tenz++)
			{
				for (onez = ones + 1; onez <= '9'; onez++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(tenz);
					putchar(onez);
					if (!((tens == '9' && ones == '8')
					&& (tenz == '9' && onez == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				onez = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
