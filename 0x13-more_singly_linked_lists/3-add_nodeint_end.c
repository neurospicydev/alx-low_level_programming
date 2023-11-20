#include "lists.h"

/**
 * add_nodeint_end - A function that adds
 * a new node at the end of a linked list
 *
 * @head: Double Pointer to the pointer storing
 * the address of the head of the list
 *
 * @n: integer
 *
 * Return: The address of the new element, or NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
