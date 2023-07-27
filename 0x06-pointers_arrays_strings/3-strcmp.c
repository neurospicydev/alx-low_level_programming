#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * @s1: first pointer parameter of type char
 * @s2: second pointer parameter of type char
 *
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int i; /* iterator */

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) /* check for \0 */
	{
		if (s1[i] != s2[i]) /* unequal chars break out of loop */
		{
			break;
		}
	}
	/* return ascii difference after converting *char to unsigned *char */
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
