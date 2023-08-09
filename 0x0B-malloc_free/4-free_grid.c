#include "main.h"
/**
 * free_grid - a function to free a grid
 * @grid: the arrays
 * @height: the height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	while (height != 0)
	{
		free(grid[height]);
		height--;
	}
}
