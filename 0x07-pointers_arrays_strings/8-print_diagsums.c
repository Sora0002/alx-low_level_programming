#include "main.h"
/**
 * print_diagsums - function to print diagsums
 * @a: first input
 * @size: the size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int s = 0, s2 = 0, b = 0;

	while (b < size)
	{
		s = s + a[b * size + b];
		b++;
	}
	b = size - 1;
	while (b >= 0)
	{
		s2 = s2 + a[b * size + (size - b - 1)];
		b--;
	}
	printf("%d, %d\n", s, s2);
}
