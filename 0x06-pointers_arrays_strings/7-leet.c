#include "main.h"
/**
 * leet - 1337
 * @s: string
 *
 * Return: char
 */
char *leet(char *s)
{
	char *p = s;
	char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char b[] = {'4', '3', '0', '7', '1'};
	int i;

	while (*p)
	{
		i = 0;
		while (i < 10)
		{
			if (*p == a[i] || *p == a[i + 1])
			{
				*p = b[i / 2];
				break;
			}
			i += 2;
		}
		p++;
	}
	return (s);
}
