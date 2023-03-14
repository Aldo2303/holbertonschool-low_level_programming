#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid.
 * @grid: the variable
 * @height: the variable
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL)
	{
		free(grid);
	}
	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
