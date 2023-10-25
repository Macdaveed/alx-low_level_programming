#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: A pointer to the head of the linked list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		listint_t *current;

		head = head->next;
		free(current);
	}
}
