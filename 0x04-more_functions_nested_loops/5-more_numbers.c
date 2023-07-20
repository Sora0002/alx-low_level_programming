#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int r, c, i;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c <= 14; c++)
		{
			i = c;
			if (c >= 10)
			{
				_putchar(49);
				i = c % 10;
			}
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
