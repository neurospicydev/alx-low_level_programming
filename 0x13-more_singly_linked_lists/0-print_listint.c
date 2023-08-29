#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;

	if (h == NULL)
		return (-1);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}

