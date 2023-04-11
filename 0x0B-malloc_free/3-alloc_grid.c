#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: Matrice
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (0);
	grid = malloc(sizeof(grid) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i-- >= 0)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
