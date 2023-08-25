#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list- A function that prints all elements of a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: Number of nodes in a linked list
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		h = h->next;
		nodes++;
	}
	return (nodes);
}
