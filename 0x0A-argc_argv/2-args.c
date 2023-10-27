#include "main.h"
#include "stdio.h"

/**
 * main - A function that prints all arguments
 * it receives.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argc > 0; i++)
	{
		printf("%s\n", argv[i]);
		argc--;
	}
	return (0);
}
