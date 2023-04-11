#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees grid
 * @grid: grid to be freed
 * @height: height
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int y = 0;

	while (y < height)
	{
		free(grid[y]);
		y++;
	}
	free(grid);
}
