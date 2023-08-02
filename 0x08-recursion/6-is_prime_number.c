#include "main.h"
int checker(int n, int b)
{
	if (n == 1 || n == -1)
		return (0);
	if (b <= n / 2)
	{
		if (n % b == 0)
			return (0);
		return (checker(n, b + 1));
	}
	return (1);
}
/**
 * is_prime_number - function to check if the number is prime.
 * @n: the number
 *
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (checker(n, 2) == 0)
		return (0);
	return(1);
}
