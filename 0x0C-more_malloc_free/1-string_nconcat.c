#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - A function that concatenates two strings
* @s1: first string to concatenate
* @s2: second string to concatenate
* @n: number of bytes of s2 to concatenate to s1
*
* Return: NULL if function fails, or pointer to newly allocated
* space in memory followed by first n bytes of s2, and 0/.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len_s1 = 0;
	unsigned int len_s2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1])
	{
		len_s1++;
	}

	while (s2[len_s2])
	{
		len_s2++;
	}

	if (n >= len_s2)
	{
		len_s2 = n;
	}

	ptr = malloc(sizeof(char) * (len_s1 + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		ptr[i] = s2[j];

	ptr[i] = '\0';
	return (ptr);

}
