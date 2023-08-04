#include "main.h"
/**
 * _puts - function to print string
 * @str: the string
 *
 * Return:void
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
