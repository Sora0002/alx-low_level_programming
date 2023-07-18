#include "main.h"
/**
 * jack_bauer -  a function that prints every minute of the day of Jack Bauer,
 *		starting from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a = 0, b, c = 0, d = 0;

	while (a <= 2)
	{
		b = 0;
		while (b <= 9)
		{
			c = 0;
			if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
			{
				while (c <= 5)
				{
					d = 0;
					while (d <= 9)
					{
						_putchar(a + '0');
						_putchar(b + '0');
						_putchar(58);
						_putchar(c + '0');
						_putchar(d + '0');
						d++;
						_putchar('\n');
					}
					c++;
				}
			}
			b++;
		}
		a++;
	}
}
