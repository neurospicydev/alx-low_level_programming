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
		printf("Name: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)");

	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
