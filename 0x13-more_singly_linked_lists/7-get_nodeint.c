#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - A function that returns the nth node
 * of a linked list
 *
 * @head: Pointer to the head of the linked list
 * @index: Index of the node
 * Return: nth node of a linked list, or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = head;
	while (index > 0)
	{
		if (node == NULL)
			return (NULL);

		node = node->next;
		index--;
	}
	return (node);

}
