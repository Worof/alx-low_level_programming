#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by alloc_grid.
 * @grid: The 2D grid/array.
 * @height: Height of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Loop through each row and free its memory */
	for (i = 0; i < height; i++)
		free(grid[i]);

	/* Free the memory allocated for the rows */
	free(grid);
}
