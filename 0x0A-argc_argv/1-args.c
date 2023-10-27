#include "main.h"
#include "stdio.h"

/**
 * main - A function that prints the number of arguments
 * passed into it.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int count = 0;

	if (argc >= 2)
	{
		argc -= 1;
		while (count < argc)
			count++;
	}
	printf("%d\n", count);
	return (0);
}
