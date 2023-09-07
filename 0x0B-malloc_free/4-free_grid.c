#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: array integer
 * @height: grid height
 *
 */

void free_grid(int **grid, int height)
{
	int j;

	for (; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
