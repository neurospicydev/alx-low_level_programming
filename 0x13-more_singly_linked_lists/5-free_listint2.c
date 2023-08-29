#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - A function that frees a linked list
 * @head: Double Pointer to the pointer storing
 * the address to the head of the linked list
 *
 * Return: Void functions have no return value
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (*head == NULL)
		*head = NULL;

	while (*head != NULL)
	{
		current = *head;
		*head = current->next;
		free(current);
	}
}
