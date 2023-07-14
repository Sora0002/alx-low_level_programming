#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that prints the alphabet .
 * Return: 0 for success
 */
int main(void)
{
	char a = 'a';

	do {
		putchar(a);
		a++;
	} while (a <= 'z');
	putchar('\n');
	return (0);
}
