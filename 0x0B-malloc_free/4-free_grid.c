#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees 2 dimensional array previously created
 * @grid: address of the grid
 * @height: height of grid
 * Return: empty
 */
void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
	{
		free(grid[c]);
	}

	free(grid);
}
