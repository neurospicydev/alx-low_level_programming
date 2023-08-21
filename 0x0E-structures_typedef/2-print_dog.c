#include "dog.h"
#include <stdio.h>

/**
 * print_dog- A function that prints a struct dog
 * @d: Pointer to the struct of a dog
 *
 * Return: void functions have no return value
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age <= 0.0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %.1f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
