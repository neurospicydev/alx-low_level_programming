#include "main.h"

/**
* _strcat - A function that concatenates two strings
* @dest: The destination string to append the source string
* @src: The source string that overwrites the terminating null byte
* \0 at the end of dest, and then adds a terminating null byte
*
* Return: A pointer to the resulting string dest. Always 0 (Success)
*/

char *_strcat(char *dest, char *src)
{
	char *pn = dest;

	while (*pn != '\0') /* point to the end of dest */
	{
		pn++;
	}

	while (*src != '\0')
	{
		*pn = *src; /* traverse string and append src to dest */
		pn++;
		src++;
	}

	*pn = '\0'; /* reappend \0 to dest thru *pn to validate string*/
	return (dest);
}
