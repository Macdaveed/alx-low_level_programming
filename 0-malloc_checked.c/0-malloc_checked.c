#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - This program allocates memory using malloc
 * @b: memory size
 * Return: pointer to new memory allocated
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(9);
	else
		return;
}
