#include <unistd.h>
#include <string.h>

/**
 * main - a simple program that prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar\n";

	write(1, str, strlen(str));
	return (0);
}
