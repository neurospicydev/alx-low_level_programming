#include "dog.h"

/**
 * _strdup - A function that duplicates a string
 * @str: pointer to the address of the string to duplicate
 *
 * Return: A pointer to the newly duplicated string,or
 * NULL on failure due to inssuficient memory
 */

char *_strdup(char *str)
{
	char *ptr;
	char *start = str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str = start;

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
 * new_dog - A function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Pointer to a new dog, or NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);
	if (name == NULL || owner == NULL)
		return (NULL);

	n_dog->age = age;
	n_dog->name = _strdup(name);
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	n_dog->owner = _strdup(owner);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	return (n_dog);
}
