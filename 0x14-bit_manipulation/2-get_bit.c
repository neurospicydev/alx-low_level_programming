#include "main.h"

/**
 * get_bit - A function that returns the value of bit
 * at a given index.
 * @n: unsigned long integer
 * @index: index of the bit to check
 *
 * Return: The value of the bit at a specific
 * index, or -1 if an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int nbin, nbit;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	nbin = n >> index;
	nbit = (nbin & 1);

	return (nbit);
}
