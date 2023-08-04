#include "main.h"
/**
 * _isupper -  a function that checks for uppercase character.
 * @c: the char
 *
 * Return: 1 on upper / 0 on otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
