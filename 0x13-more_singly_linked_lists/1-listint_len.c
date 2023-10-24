#include <stdio.h>
#include "lists.h"

/**
 * print_listint - returns the number of elements in a linked list
 * @h: linked list of listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%D\n", h->n);
		h = h->n;
		num++;
	}
	return (num);
}
