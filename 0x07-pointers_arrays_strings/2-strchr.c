#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: the string
 * @c: th character
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	while (*s)
	{
		if (*s == c)
		{
			a = 1;
			break;
		}
		else
		{
			a = -1;
			s++;

		}
	}
	if (a == -1)
		s = NULL;
	return (s);
}
