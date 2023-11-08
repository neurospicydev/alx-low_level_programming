#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @name: pointer to a char variable
 * @f: pointer to a function that takes one argument
 * of type char, and returns nothing
 *
 * Return: void functions have no return value
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
