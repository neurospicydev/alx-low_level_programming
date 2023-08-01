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
	while (*haystack != '\0')
	{
		char *start = haystack;
		char *sub_string = needle;

		while (*haystack != '\0' && *sub_string != '\0' && *haystack == *sub_string)
		{
			haystack++;
			sub_string++;
		}
		if (*sub_string == '\0')
			return (start);
		haystack++;
	}
	return ((void *) 0);
}
