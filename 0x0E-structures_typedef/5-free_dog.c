#include "dog.h"

/**
 * free_dog - A function that frees dog structures
 * @d: pointer to the dog struct to be freed
 *
 * Return: void functions have no return value
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
