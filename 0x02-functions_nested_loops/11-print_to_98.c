#include "main.h"
#include "stdio.h"
/**
 * print_to_98 - A function that prints all natural numbers n to 98
 * @num: natural number of type int
 *
 * Return: Return natural number n followed by a new line
 */

void print_to_98(int num)
{
	while (num < 98)
	{
		printf("%d, ", num);
		num++;
	}

	while (num > 98)
	{
		printf("%d, ", num);
		num--;
	}

	if (num == 98)
	{
		printf("%d", num);
	}
	printf("\n");
}
