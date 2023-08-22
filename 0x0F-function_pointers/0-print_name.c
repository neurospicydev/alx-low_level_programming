#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - A function that prints a name
 * @name: Name to be printed
 * @f: function pointer parameter that takes one argument of type char
 *
 * Return: Void functions have no return value
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
