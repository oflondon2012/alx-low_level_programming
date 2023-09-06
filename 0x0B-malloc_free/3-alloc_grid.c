#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers
 * @width: array width
 * @height:array height
 *
 * Return: a pointer
 */

int **alloc_grid(int width, int height)
{
	int **arptr, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arptr = (int *) malloc(size[int] * height);
	if (arptr == NULL)
	{
		free(arptr);
		return (NULL);
	}
	for ( ; i < height; i++)
	{
		arptr[i] = malloc(width * sizeof(int));
		if (arptr[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(arptr[i]);
			}
			free(arptr);
			return (NULL);
		}
	}
	for (; i < height; i++)
		for (; j < width; j++)
			arptr[i][j] = 0;
	return (arptr);
}

