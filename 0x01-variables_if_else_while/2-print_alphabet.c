#include <stdio.h>

/**
* main - A program that prints the alphabet in lowercase
*
* Return: Always 0 (Sucess)
*/

int main(void)
{
	int alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
