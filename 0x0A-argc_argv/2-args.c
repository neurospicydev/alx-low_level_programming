#include "main.h"
#include <stdio.h>

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
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
