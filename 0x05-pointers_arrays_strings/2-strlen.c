#include "main.h"

/**
* _strlen - A function that returns the length of a string.
* @s: string parameter of type char.
*
* Return: Always 0 (Success)
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0') /* null terminator in C */
	{
		len++;
		s++;
	}
	return (len); /* retun the length of the string */
}
