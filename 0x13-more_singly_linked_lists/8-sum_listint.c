#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - A function that add the data (n)
 * of all the nodes in a linked list
 *
 * @head: Pointer to the head of the linked list
 *
 * Return: Sum of all data (n) of a linked list,
 * or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *curr;

	if (head == NULL)
		return (0);

	curr = head;

	while (curr != NULL)
	{
		total += curr->n;
		curr = curr->next;
	}
	return (total);
}
