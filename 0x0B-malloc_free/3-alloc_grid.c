#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - nest loop to make grid
 * @width: input for the width
 * @hieght: input for the height
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **mee;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	mee = malloc(sizeof(int *) * height);
	if (mee == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		mee[a] = malloc(sizeof(int) * width);
		if (mee[a] == NULL)
		{
			for (;a >= 0; a--)
				free(mee[a]);
			free(mee);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			mee[a][b] = 0;
	}
	reurn (mee);
}
	
