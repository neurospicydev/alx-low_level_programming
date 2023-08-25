#include "lists.h"
#include <stdio.h>

/**
 * print_first- A function that prints a string
 * before the main function is invoked
 *
 * Return: Void functions have no return value
 */

void __attribute__((constructor)) print_first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
