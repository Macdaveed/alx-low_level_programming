#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - A program that adds a new node at end of a list
 * @head: the pointer to the list
 * @str: the string to be duplicated and added to the end of the list_t lis
 *
 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current = current->next;
	}
	return (new_node);
}
