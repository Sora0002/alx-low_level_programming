#include "variadic_functions.h"
/**
 * print_all - print all types
 * @format: the format
 * Return: void
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *st, *sp = "";

	va_list l;

	va_start(l, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'f':
					printf("%s%f", sp, va_arg(l, double));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(l, int));
					break;
				case 'c':
					printf("%s%c", sp, va_arg(l, int));
					break;
				case 's':
					st = va_arg(l, char *);
					if (!st)
						st = "(nil)";
					printf("%s%s", sp, st);
					break;
				default:
					i++;
					continue;
			}
			sp = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(l);
}
