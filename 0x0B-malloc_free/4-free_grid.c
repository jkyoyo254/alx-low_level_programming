#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a2 dimensinal grid
 * @grid: multidimensional arry of integers
 * @height: height of the grid 
 *
 * Return: no return
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
