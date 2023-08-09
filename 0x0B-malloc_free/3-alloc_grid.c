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
	int **a, h, w, i;

	if (width == 0 || height == 0)
		return (NULL);
	a = (int **)malloc(height * sizeof(int *));
	if (a == NULL)
		return (NULL);
	h = 0;
	while (h < height)
	{
		a[h] = (int *)malloc(width * sizeof(int));
		if (a[h] == NULL)
		{
			i = 0;
			while (i < h)
			{
				free(a[i]);
				i++;
			}
			free(a);
			return (NULL);
		}
		w = 0;
		while (w < width)
		{
			a[h][w] = 0;
			w++;
		}
		h++;
	}
	return (a);
}
