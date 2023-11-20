#include "lists.h"

/**
 * add_nodeint - A function that adds a new node
 * at the beginning of a linked list
 * @head: Double pointer to the pointer address
 * @n: number of elements in the linked list
 * that stores the head of the list
 *
 * Return: The address of the new element, or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL || head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
