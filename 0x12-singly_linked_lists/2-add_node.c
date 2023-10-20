#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <strdup.h>

/**
 * add_node - A program that adds a new node at beginning of the list_ list
 * @head: a pointer to the head of the list
 * @str: string to be duplicated
 * Return:The address of the new element, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = atrdup(str);

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
