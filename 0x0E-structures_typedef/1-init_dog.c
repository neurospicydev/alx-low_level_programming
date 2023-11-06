#include "dog.h"

/**
 * init_dog - A function that initialises the structure
 * of a dog
 * @d: pointer to the structure of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner of the dog of type char
 *
 * Return: void functions have no return value
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
