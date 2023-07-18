#include "main.h"
/**
 * print_alphabet - a fucntion to print all alphabets in lowercase.
 *
 * Return: void
 */

void print_alphabet(void)
{
	char character = 'a';

	while (character <= 'z') /*stop when character <= z*/
	{
		_putchar(character);
		character++; /*character = character + 1*/
	}
	putchar('\n');
}
