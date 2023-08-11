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
	unsigned int i = 0, b = 0, s = 0, d, f;
	char *p;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[b] != '\0')
		b++;
	if (n >= b)
		n = b;
	s = i + n;
	p = (char *)malloc(s + 1);
	if (p == NULL)
		return (NULL);
	for (d = 0; d < i; d++)
		p[d] = s1[d];
	for (f = 0; f < n; f++)
	{
		p[d] = s2[f];
		d++;
	}
	p[s] = '\0';
	return (p);
}
