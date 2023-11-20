#include "lists.h"

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
	listint_t *current;

	if (head != NULL)
	{
		current = *head;

		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}
