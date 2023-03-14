#include "main.h"

/**
 * free_grid - frees a 2D array
 * @grid: The 2D array to  check
 * @height: The number of rows to check
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
