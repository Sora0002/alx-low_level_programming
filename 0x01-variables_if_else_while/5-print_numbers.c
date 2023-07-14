#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that prints all digit of base 10.
 * Return: 0 for success
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
