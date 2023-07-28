#include "main.h"
/**
 * 7-leet.c - 1337
 * @s: string
 *
 * Return: char
 */
char *leet(char *s)
{
	char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char b[] = {'4', '3', '0', '7', '1'};
	int i;

	while (*s)
	{
		i = 0;
		while (i < 10)
		{
			if (*s == a[i] || *s == a[i + 1])
			{
				*s = b[(i / 2) + 1];
				break;
			}
			i++;
		}
		s++;
	}
	return (s);
}
