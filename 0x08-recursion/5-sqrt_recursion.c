#include "main.h"
/**
 * frec - find sqrt
 * @n: the number
 * @s: start
 * @e: end
 *
 * Return: int
 */
int frec(int n, int s, int e)
{
	if (s <= e)
	{
		int m = (s + e) / 2;
		int sq = m * m;

		if (sq == n)
			return (m);
		if (sq < n)
			return (frec(n, m + 1, e));
		return (frec(n, s, m - 1));
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
	return (frec(n, 0, n));
}
