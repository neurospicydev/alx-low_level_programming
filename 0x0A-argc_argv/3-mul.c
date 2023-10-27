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
	if (argc > 1)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
