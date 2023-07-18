#include "main.h"
/**
 * print_alphabet_x10 - a function to print all alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int i = 0, b;

	while (i != 10)
	{
		b = 'a';
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		i++;
	}

}
