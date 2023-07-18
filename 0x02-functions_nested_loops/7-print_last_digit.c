#include "main.h"
/**
 * print_last_digit -  a function that prints the last digit of a number.
 * @n: the number
 *
 * Return: the last digit
 * */
int print_last_digit(int n)
{
	int d;

	d = n%10;
	if (d < 0)
		d = d * (-1);
	_putchar(d + '0');
	return (d);
}
