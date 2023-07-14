#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that prints the alphabet except e and q .
 * Return: 0 for success
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
