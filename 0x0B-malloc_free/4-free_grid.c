#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: array integer
 * @height: grid height
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (height = 0, height >= 0; height++)
		{
			free(height);
		}
		free(grid);
	}
}
