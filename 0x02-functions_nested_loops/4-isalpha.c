#include "main.h"

/**
 * _isalpha - A function that checks if a character is a letter,
 * lowercase or uppercase.
 * @ch: The character to check
 *
 * Return: 1 if it is a letter, lowercase or uppercase, otherwise 0
 */

int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
