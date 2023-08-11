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
	unsigned int i = 0, b = 0, s = 0;
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
		n = i;
	s = i + n;
	p = (char *)malloc((n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (s = 0; s < i; s++)
		p[s] = s1[s];
	for (i = 0; i < n; i++)
	{
		p[s] = s2[i];
		s++;
	}
	p[s] = '\0';
	return (p);
}
