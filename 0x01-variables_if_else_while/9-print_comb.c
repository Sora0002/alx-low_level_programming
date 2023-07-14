#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that prints the alphabet .
 * Return: 0 for success
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		if(a != 9)
		{
			putchar(44);
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
