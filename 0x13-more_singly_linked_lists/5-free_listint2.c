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
	listint_t *tmp;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
