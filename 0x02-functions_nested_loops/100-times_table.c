#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The entry number (0 <= n <= 15)
 */
void print_times_table(int n)
{
	int a, b, k;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				k = a * b;
				if (b != 0)
				{
					_putchar(44);
					_putchar(32);
					if (k < 100)
						_putchar(32);
					if (k < 10)
						_putchar(32);
				}
				if (k >= 100)
					_putchar(k / 100 + '0');
				if (k >= 10)
					_putchar((k % 100) / 10 + '0');
				_putchar(k % 10 + '0');
			}
			_putchar('\n');
		}
	}
}

