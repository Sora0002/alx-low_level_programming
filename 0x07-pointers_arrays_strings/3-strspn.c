#include "main.h"

/**
 * _strspn -  a function that gets the length of a prefix substring.
 * @s: string
 * @accept: the character
 * Return: void
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, d = 1;
	char *p;

	while (accept[i] != '\0')
	{
		p = s;
		while (*p)
		{
			if (accept[i] == *p)
			{
				d++;
				break;
			}
			p++;
		}
		i++;
	}
	return (d);
}
