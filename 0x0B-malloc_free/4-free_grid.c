#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - free grid
 * @grid: grid to free
 * @height: height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
