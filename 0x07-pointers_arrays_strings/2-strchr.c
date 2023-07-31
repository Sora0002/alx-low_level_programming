#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: the string
 * @c: the character
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
		s++;
	}
	if (a != 1)
		s = NULL;
	return (s);
}
