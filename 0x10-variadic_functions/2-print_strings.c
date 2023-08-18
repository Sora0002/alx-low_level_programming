#include "variadic_functions.h"
/**
 * print_strings - print a string
 * @separator: sepa
 * @n: count
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	char *st;
	unsigned int i;

	va_start(s, n);

	for (i = 0; i < n; i++)
	{
		st = va_arg(s, char *);

		if (st == NULL)
			printf("(nil)");
		else
			printf("%s", st);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(s);
}
