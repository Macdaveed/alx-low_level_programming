#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to a pointer to the head of the linked list.
 * @idx: The index at which the new node should be added (starting at 0).
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current;
	listint_t *previous;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	previous = (NULL);
	i = 0;
	while (current != NULL && i < idx)
	{
		previous = current;
		current = current->next;
		i++;
	}
	if (i == idx)
	{
		previous->next = new_node;
		new_node->next = current;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
