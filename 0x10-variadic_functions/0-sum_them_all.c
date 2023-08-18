#include "variadic_functions.h"
/**
 * sum_them_all - sum of all args
 * @n: the count
 *
 * Return: the rsult
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, s = 0;
	va_list ptr;

	if (!n)
		return (0);
	va_start(ptr, n);
	while (i < n)
	{
		s += va_arg(ptr, int);
		i++;
	}
	va_end(ptr);
	return (s);
}
