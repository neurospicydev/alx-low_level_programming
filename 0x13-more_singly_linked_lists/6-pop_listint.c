#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - A function that deletes the head node
 * of a linked list, and returns the head node's data (n)
 *
 * @head: Double Pointer to the pointer storing
 * the address to the head of the linked list
 *
 * Return: 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *curr;
	int node;

	if (*head == NULL)
		return (0);

	curr = *head;
	node = curr->n;
	tmp = curr->next;

	free(curr);

	*head = tmp;

	return (node);
}
