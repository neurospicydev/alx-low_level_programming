#include "main.h"

/**
 * clear_bit - A function that sets the value of bit
 * to 0 at a given index.
 * @n: unsigned long integer
 * @index: index of the bit to check
 *
 * Return: 1 on success, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	m = ~(1 << index);
	*n = *n & m;

	return (1);
}
