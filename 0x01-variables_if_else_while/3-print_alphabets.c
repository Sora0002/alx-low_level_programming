#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that prints the alphabet  lc and uc.
 * Return: 0 for success
 */
int main(void)
{
	char a = 'a';

	do {
		putchar(a);
		a++;
	} while (a <= 'z');
	a = 'A';
	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
