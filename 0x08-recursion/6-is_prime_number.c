#include "main.h"
int checker(int n, int b)
{
	if (b <= n / 2)
	{
		if (n % b == 0)
			return (0);
		return (checker(n, b + 1));
	}
}
/**
 * is_prime_number - function to check if the number is prime.
 * @n: the number
 *
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (checker(n, 0) == 0)
		return (0);
	return(1);
}
