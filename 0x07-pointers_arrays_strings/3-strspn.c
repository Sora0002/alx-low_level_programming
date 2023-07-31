#include "main.h"

/**
 * _strspn -  a function that gets the length of a prefix substring.
 * @s: string
 * @accept: the character
 * Return: void
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, d;
	
	while (s[i] != '\0')
	{
		d = 0;
		while (accept[d] != s[i])
		{
			if (accept[d] == '\0')
				return (i);
			d++;
		}
		i++;
	}
	return (i);
}
