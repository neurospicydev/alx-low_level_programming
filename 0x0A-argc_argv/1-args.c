#include "main.h"
#include <stdio.h>

/**
 * main - A function that prints the number of arguments
 * passed into it.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
