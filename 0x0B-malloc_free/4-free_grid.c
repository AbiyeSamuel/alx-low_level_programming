#include "main.h"

/**
 * free_grid - frees a 2D grid created by your alloc_grid
 * @grid: required grid
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(height);
		free(grid);
	}
}
