#include "3-calc.h"

/**
 * main - A program that performs simple operations
 * and prints the result followed by a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int (*fn)(int x, int y);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fn = get_op_func(argv[2]);
	if (fn == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = fn(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
