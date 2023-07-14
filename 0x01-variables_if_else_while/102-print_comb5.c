#include <stdio.h>
/**
 * main - Entry point
 * Description: Last task .
 * Return: 0 for success
 */
int main(void)
{
	int a = 0, b, c, d;

	while (a < 10)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = a; c < 10; c++)
			{
				for (d = b + 1; d < 10; d++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					if (a != 9 || b != 8 || c != 9 || d != 9)
					{
						putchar(44);
						putchar(' ');
					}
				}
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
