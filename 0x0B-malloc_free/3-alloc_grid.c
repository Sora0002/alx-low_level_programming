#include "main.h"

/**
 * alloc_grid - function
 * @width: the width
 * @height: the height
 *
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int w = 0, h = 0, **a;

	if (width == 0 || height == 0)
		return (NULL);
	a = (int **)malloc(h * sizeof(int));
	if (a == NULL)
		return (NULL);
	while (h < height)
	{
		a[h] = (int *)malloc(width * sizeof(int));
		h++;
	}
	h = 0;
	while (h < height)
	{
		while (w < width)
		{
			a[h][w] = 0;
			w++;
		}
		h++;
	}
	return (a);
}
