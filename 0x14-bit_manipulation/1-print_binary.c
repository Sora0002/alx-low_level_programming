#include "main.h"
/**
 * print_binary - print binary number
 * @n: the number
 * Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned long int a;

	if (n > 1)
	{
		a = n >> 1;
		printf_binary(a);
	}
	if ((n & 1) == 1)
		_putchar('1');
	else
		_putchar('0');
}