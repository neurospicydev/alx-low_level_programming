#include <stdio.h>

/**
 * main - A program that prints the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long a = 1;
	long b = 2;
	int count;
	int num = 50;

	for (count = 1; count <= (num / 2); count++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (num % 2 == 1)
		printf("%li", a);

	printf("\n");

	return (0);
}
