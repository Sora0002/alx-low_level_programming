#include "main.h"
/**
 * puts_half - print half of a string
 * @str: the string
 *
 * Return: vois
 */
void puts_half(char *str)
{
	int a = 0, b;
	
	while (str[a] != '\0')
	{
		a++;
	}
	a--;
	b = (a / 2);
	while (b <= a)
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
