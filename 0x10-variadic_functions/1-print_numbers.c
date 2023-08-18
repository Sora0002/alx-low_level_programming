#include "variadic_functions.h"
/**
 * print_numbers - print all numbers
 * @separator: separate numbers
 * @n: counter
 * Rtturn: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pt;
	unsigned int i;

	va_start(pt, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pt, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(pt);
}
