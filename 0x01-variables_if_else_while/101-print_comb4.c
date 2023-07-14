#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that prints all possible different comb.
 * Return: 0 for success
 */
int main(void)
{
	int a = 0, b, c;

	while (a < 10)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (a != 7 || b != 8 || c != 9)
				{
					putchar(44);
					putchar(' ');
				}
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
