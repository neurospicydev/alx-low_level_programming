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
	int a, b;
	int result;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if (*op != '+' && *op != '-' && *op != '*' &&
			*op != '/' && *op != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (b == 0 && (*op == '%' || *op == '/'))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(op)(a, b);
	printf("%d\n", result);
	return (0);
}
