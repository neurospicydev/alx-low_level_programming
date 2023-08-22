#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly
 * allocated space in memory
 * @str: String to duplicate, pointer
 *
 * Return: Pointer to the duplicated string or NULL on failure.
 */

char *_strdup(char *str)
{
	char *dup;
	int len = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
	{
		return (NULL);
	}

	for (; i <= len; i++)
		dup[i] = str[i];
	return (dup);
}

/**
 * new_dog - A function that creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: a new dog or NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
