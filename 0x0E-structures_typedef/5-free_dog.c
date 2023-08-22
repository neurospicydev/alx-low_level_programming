#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - A function that frees dogs
 * @d: Pointer to the struct of a dog
 *
 * Return: Void functions have no return value
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
