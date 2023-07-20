gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-print_triangle.c -o 10-triangles#include "main.h"
/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i = size, k/* d = 0, k*/;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i > 0)
		{
			k = i;
			while(k > 0)
			{
				_putchar(35);
				k--;
			}
			_putchar('t');
		/*	_putchar('b');
			k = 1;
			while (k < size)
			{
				putchar('c');
				k++;
			}
			_putchar('t');
			d++;*/
			/*k = d;
			while (k > 0)
			{
				_putchar(35);
				k--;
			}*/
			_putchar('\n');
			i--;
		}
	}
}
