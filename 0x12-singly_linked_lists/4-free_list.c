#include "lists.h"
#include <stdlib.h>

/**
 * free_list- A function that frees a list_t list
 * @head: Pointer to the head of the linked list
 *
 * Return: Void functions have no return value
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = current->next;
		free(current->str);
		free(current);
	}
}
