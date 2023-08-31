#include "main.h"

/**
 * set_bit - A function that sets the value of a bit
 * to 1 at a given index
 * @n: Pointer to the address of the bit to set
 * @index: Index of the bit to set
 *
 * Return: 1 on success, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
