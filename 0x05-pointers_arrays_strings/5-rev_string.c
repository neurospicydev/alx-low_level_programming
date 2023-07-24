#include "main.h"

/**
* rev_string - A function that reverses a string
* @s: pointer parameter/variable of type char
*
* Return: Void functions have no return value
*/

void rev_string(char *s)
{
	int len = 0;
	int count = 0;
	char *start = s; /* store start of string */
	char temp; /* temp variable to aid swap */
	int i;

	while (*s != '\0')
	{
		len++;
		s++; /* after iteration, *s points to '\0' */
	}
	count = len - 1;
	s = start; /* reset start of string array */

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i]; /* perform swap, reverse string */
		s[i] = s[count];
		s[count--] = temp;
	}

}
