#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that prints the alphabet in reversz.
 * Return: 0 for success
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
