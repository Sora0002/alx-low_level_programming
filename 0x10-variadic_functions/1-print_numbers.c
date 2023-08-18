#include "variadic_functions.h"
/**
 * print_numbers - print all numbers
 * @separator: separate numbers
 * @n: counter
 * Rtturn: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list pt;

	if (!n)
		return;
	va_start(pt, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pt, int));
		if ((separator != NULL) && (i != (n - 1)))
			printf("%s", separator);
	}
	printf("\n");
	va_end(pt);
}
