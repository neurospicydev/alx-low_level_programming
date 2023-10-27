#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that prints the number of arguments
 * passed into it.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 2)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	return (0);
}
