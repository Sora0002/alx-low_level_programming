#include "main.h"
/**
 * array_range - a function that creates an array of integers.
 * @min: min
 * @max: max
 *
 * Return: int
 */
int *array_range(int min, int max)
{
	int l, i = 0;
	int *p;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	p = malloc(sizeof(int) * l);
	if (p == NULL)
		return (NULL);
	while (i < l)
	{
		p[i] = min++;
		i++;
	}
	return (p);
}
