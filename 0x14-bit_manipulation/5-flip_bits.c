#include "main.h"

/**
 * flip_bits - A function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: unsigned long integer
 * @m: unsigned long integer
 *
 * Return: Always 0 (Success)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int n_bits;

	for (n_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			n_bits++;
	}
	return (n_bits);
}
