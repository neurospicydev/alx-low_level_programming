#include <stdio.h>

/**
* main - A program that prints the alphabet in lowercase
* excluding 'q' and 'e' followed by a new line.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower == 'e' || lower == 'q')
			continue;

		putchar(lower);
	}
	putchar('\n');
	return (0);
}
