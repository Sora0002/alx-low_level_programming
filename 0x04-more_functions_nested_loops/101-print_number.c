#include "main.h"
#include <stdio.h>
/**
 * print_number -  a function that prints an integer.
 * @n: the integer
 *
 * Return: void
 */
void print_number(int n)
{
	int a = n, b, d;

	d = 1;
	while (a > 10)
	{
		a = a / 10;
		d = d * 10;
	}
	printf("%d \n", d);
	while (d != 1)
	{
		b = n % d;
		d = d / 10;
		printf("%d", b);
	}
	_putchar('\n');
}
