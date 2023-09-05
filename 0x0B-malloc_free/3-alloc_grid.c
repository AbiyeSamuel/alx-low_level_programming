#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2D array of int
 * @width: width of array
 * @height: height of array
 * Return: on failure return NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grdout;

	if (width <= 0 || height <= 0)
		return (NULL);
	grdout = malloc(height * sizeof(int *));
	if (grdout == NULL)
	{
		free(grdout);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grdout[i] = malloc(width * sizeof(int));
		if (grdout[i] == NULL)
		{
			free(grdout[i]);
			free(grdout);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grdout[i][j] = 0;
	}
	return (grdout);
}
