#include "main.h"
/**
 * frec - find sqrt
 * @n: the number
 * @s: start
 * @e: end
 *
 * Return: int
 */
int frec(int n, int s)
{
	int d = n / 2, b;

	if (s <= d)
	{
		b = n / s;
		if (b == s)
		{
			return (s);
		}
		else
		{
			return (frec(n, s + 1));
		}
	}
	return (-1);
}
/**
 * _sqrt_recursion - return the natural square.
 * @n: the number
 *
 * Return: square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (frec(n, 1));
}
