#include "main.h"
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - A function that initialises a variable of type struct dog
 * @d: Pointer to the struct of a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Void functions have no return value
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return
	d->name = name;
	d->age = age;
	d->owner = owner;
}
