#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints its name, followed
 * by a new line.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	while (argc > 0)
	{
		printf("%s\n", argv[0]);
		argc--;

	}
	return (0);
}
