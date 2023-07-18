#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int a = 0, b, c, n, k;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = a * b;
			k = c;
			if (b != 10 && b != 0)
			{
				if (k > 9)
					_putchar(32);
				else
				{
					_putchar(32);
					_putchar(32);
				}
			}
			if (c >= 10)
			{
				k = c % 10;
				n = (c - k) / 10;
				_putchar('0' + n);
			}	
			_putchar('0' + k);
			b++;
		}
		_putchar('\n');
		a++;
	}
}
