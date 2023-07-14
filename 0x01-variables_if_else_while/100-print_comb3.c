#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that prints all possible different comb.
 * Return: 0 for success
 */
int main(void)
{
	int a = 0, b;

	while (a < 10)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a != 8 || b != 9)
			{
				putchar(44);
				putchar(' ');
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
