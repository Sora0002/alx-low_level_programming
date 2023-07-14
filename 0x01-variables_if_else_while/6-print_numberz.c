#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that numbers of base 10 .
 * Return: 0 for success
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar(a + '0');
	putchar('\n');
	return (0);
}
