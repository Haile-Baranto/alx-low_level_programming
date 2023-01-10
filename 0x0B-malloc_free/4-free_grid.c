#include "main.h"

/**
 * free_grid - free 2D array
 * @grid: pinter to pointer of 2D array
 * @height: number of arrays of the 2D array
 */

void free_grid(int **grid, int height)
{
	int counter;

	while (counter < height)
	{
		free(grid[counter]);
		counter++;
	}
	free(grid);
}
