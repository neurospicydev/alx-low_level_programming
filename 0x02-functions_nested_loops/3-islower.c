#include "main.h"

/**
 * _islower - A function that checks if a character is lowercase
 * @ch: The character to check
 * Return: Always 0 (Success)
 */

int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
