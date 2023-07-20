#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			k = 0;
			while (k < i)
			{
				_putchar(32);
				k++;
			}
			_putchar(92);
			i++;
			_putchar('\n');
		}
	}
}
