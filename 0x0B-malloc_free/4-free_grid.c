#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - freing espace
 * @grid: the first input
 * @height: the second input.
 * Return: the result
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
