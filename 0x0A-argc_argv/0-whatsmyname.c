#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints its name, followed
 * by a new line.
 * @argc: argument count, not used in the function
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
