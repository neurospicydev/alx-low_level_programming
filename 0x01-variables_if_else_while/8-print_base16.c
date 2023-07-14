#include <stdio.h>

/**
* main - A simple program that prints the alphabet
* in lowercase, and then in uppercase, followed by a new line.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int alpha;
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}
	for (alpha = 'a'; alpha <= 'f' ; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
