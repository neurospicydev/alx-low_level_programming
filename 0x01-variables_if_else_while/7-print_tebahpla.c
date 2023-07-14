#include <stdio.h>

/**
* main - A program that prints all single digit numbers
* of base 10 starting from 0, followed by a new line
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int revrs;

	for (revrs = 'z'; revrs >= 'a'; revrs--)
	{
		putchar(revrs);
	}
	putchar('\n');
	return (0);
}
