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
	listint_t *current = *head;
	unsigned int i = 0;

	if (head == NULL)
		return NULL;
	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == N)
		return NULL;
	new_node->n = n;
	while (i < idx - 1 && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		free(new_node);
		return NULL;
	}
	new_node->next = current->next;
	current-next = new_code;
	return new_node;
}
