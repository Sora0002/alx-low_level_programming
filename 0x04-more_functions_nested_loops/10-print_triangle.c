#include "main.h"
/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i = size, d = 0, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i > 0)
		{
			k = i - 1;
			while (k > 0)
			{
				_putchar(32);
				k--;
			}
			d = i;
			while (d <= size)
			{
				_putchar(35);
				d++;
			}
			_putchar('\n');
			i--;
		}
	}
}
