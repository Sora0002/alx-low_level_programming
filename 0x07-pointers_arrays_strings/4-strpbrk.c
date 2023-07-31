#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: accept
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	char *b = s, *a;

	while (*b)
	{
		a = accept;
		while (*a)
		{
			if (*b == *a)
			{
				s = b;
				return (s);
			}
			a++;
		}
		b++;
	}
	return ('\0');
}
