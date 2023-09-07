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
	int j;

	for (j = 0, j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
