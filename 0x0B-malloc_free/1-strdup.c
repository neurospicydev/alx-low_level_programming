#include "main.h"
#include <stdlib.h>

/**
* _strlen - A function that returns the length of a string
* @s: string to check
*
* Return: Always 0 (Success)
*/

int _strlen(char *s)
{
	int len = 0;
	char *start = s;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s = start;
	return (len);
}

/**
* _strcpy - A function that copies the string pointed
* to by src,including the terminating null byte \0
* to the buffer pointed to by dest.
* @dest: Pointer variable of type char, destination of copy
* @src: Pointer variable of type char, source of copy
*
* Return: The pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}


/**
 * _strdup - A function that returns a pointer to a newly
 * allocated space in memory
 * @str: String to duplicate, pointer
 *
 * Return: NULL if str is NULL.
 */

char *_strdup(char *str)
{
	char *str1;
	char *str2;

	str1 = str;
	if (str1 == NULL)
	{
		return (NULL);
	}
	str2 = malloc(sizeof(char) * _strlen(str1) + 1);
	_strcpy(str2, str1);
	return (str2);
}
