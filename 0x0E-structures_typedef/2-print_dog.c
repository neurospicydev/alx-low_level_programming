#include "dog.h"

/**
 * print_dog - A function that prints the structure of a dog
 * @d: pointer to the structure of a dog
 *
 * Return: void functions have no return value
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
