#include "main.h"

/**
 * jack_bauer - A function that prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int hr;
	int mn;

	for (hr = 0; hr <= 23; hr++)
	{
		for (mn = 0; mn <= 59; mn++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((mn / 10) + '0');
			_putchar((mn % 10) + '0');
			_putchar('\n');
		}
	}
}
