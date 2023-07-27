#include "main.h"
#include <stdio.h>

/**
 * reverse_array - A function that reverses the content of an array of integers
 * @a: An array of integers
 * @n: The number of elements to swap
 *
 * Return: Void functions hav no return value
 */

void reverse_array(int *a, int n)
{
	int temp; /* temp variable to aid swap to reverse array */
	int i = 0;

	for (; i < n / 2; i++) /* loop only n/2 to avoid undoing swaps */
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
