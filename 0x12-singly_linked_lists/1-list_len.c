#include "lists.h"

/**
 * list_len - A function that returns the number of elements in a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: Number of elements in the linked list.
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
