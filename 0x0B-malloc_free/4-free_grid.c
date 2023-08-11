#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: pointer to pointer of integers
 * @height: height of grid
 *
 * Return: Always 0 (success)
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}


