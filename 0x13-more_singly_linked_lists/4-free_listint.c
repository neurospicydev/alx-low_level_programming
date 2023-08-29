#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - A function that frees a linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: Void functions have no return value
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = current->next;
		free(current);
	}
}
