#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node
 * of a linked list
 *
 * @head: Double Pointer to the pointer storing
 * the address to the head of the linked list
 * @index: index of the node that should be deleted
 * Return: 1 on success, or -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	tmp = *head;
	while (tmp != NULL && i < index)
	{
		prev = tmp;
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
		return (-1);

	prev->next = tmp->next;
	free(tmp);
	return (1);

}
