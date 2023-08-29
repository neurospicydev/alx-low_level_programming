#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - A function that inserts a new node
 * at a given position
 *
 * @head: Double Pointer to the pointer storing
 * the address to the head of the linked list
 * @idx: Index of the list where the new node should be added
 * @n: number of nodes
 *
 * Return: The address of the new node, or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *curr;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		curr = *head;
		while (idx > 1 && curr != NULL)
		{
			curr = curr->next;
			idx--;
		}
		if (curr == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = curr->next;
		curr->next = new_node;
	}
	return (new_node);
}
