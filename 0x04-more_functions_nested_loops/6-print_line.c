#include "main.h"
/**
 * print_line -  a function that draws a straight line in the terminal.
 * @n: how mush times the character _ will print
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
	}
	else
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar('\n');
}
