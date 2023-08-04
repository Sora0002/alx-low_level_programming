#include "main.h"
/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: the buffer
 * @b: the byte
 * @n: the end
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0, l;

	l = (int)n;
	while (s[i] != '\0')
	{
		i++;
	}
	l--;
	i = 0;
	while (i <= l)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
