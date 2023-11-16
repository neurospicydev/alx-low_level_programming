#include "lists.h"

/**
 * add_node- A function that adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the linked list
 * @str: Pointer to the string data to add to the new node
 *
 * Return: Address of the new element, or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (head == NULL || str == NULL || new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
