#include "main.h"

/**
 * _strstr - A function that locates a substring
 * @haystack: Pointer, string to be searched
 * @needle: Substring to search for in the string haystack, also pointer
 *
 * Return: A pointer to the beginning of the located
 * substring, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *start = needle;
	int i = 0;

	while (*haystack)
	{
		if (needle[i] == *haystack)
			return (start);
		haystack++;
	}
	return ((void *) 0);
}
