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
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}
