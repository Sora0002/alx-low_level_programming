#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int a, d, k, i;

	i = 0;
	while (i <= 10)
	{
		a = 0;
		while (a <= 14)
		{
			k = a;
			if (a >= 10)
			{
				k = a % 10;
				d = (a - k) / 10;
				_putchar(d + '0');
			}
			_putchar(k + '0');
			a++;
		}
		_putchar('\n');
		i++;
	}
}
