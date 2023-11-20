#include "lists.h"

/**
 * listint_len - A function that returns the number of elements
 * of a linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
