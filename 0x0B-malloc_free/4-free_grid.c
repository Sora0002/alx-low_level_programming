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
	int h = 0;
	while (h < height)
	{
		free(grid[height]);
		h++;
	}
}
