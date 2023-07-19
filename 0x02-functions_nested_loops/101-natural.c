#include <stdio.h>

/**
 * main - A program that prints the sum of multiples of 3 or 5 below 1024
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	int total;

	total = 0;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 5 == 0) || (num % 3 == 0))
		{
			total += num;
		}
	}
	printf("%d\n", total);

	return (0);
}
