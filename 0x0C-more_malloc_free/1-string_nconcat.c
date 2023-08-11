#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: baytes
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, b = 0, s, a = 0;
	char *p;

	if (s2 != NULL)
	{
		while (s2[i] != '\0')
			i++;
		if (n >= i)
			n = i;
	}
	if (s1 != NULL)
		while (s1[b] != '\0')
			b++;
	s = i + b;
	p = (char *)malloc(s * sizeof(char));
	if (p == NULL)
		return (NULL);
	if (b != 0)
		while (a < b)
		{
			p[a] = s1[a];
			a++;
		}
	if (i != 0)
	{
		b = 0;
		while (b < n)
		{
			p[a] = s2[b];
			a++;
			b++;
		}
	}
	return (p);
}
