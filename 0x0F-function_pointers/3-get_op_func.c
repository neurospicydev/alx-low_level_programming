#include "3-calc.h"

/**
 * get_op_func - A function that selects the current
 * function to perform an operation based on user
 * input
 *
 * @s: pointer to the operator passed as argument
 * to the program
 *
 * Return: a pointer to the function that corresponds
 * to the operator given as a parameter, or NULL if
 * s does not match the any of the expected operators
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
