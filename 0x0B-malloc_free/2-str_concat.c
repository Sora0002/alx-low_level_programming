#include "main.h"
/**
 * str_concat -  a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, b = 0;
	char *p;

	if (s1 == NULL && s2 == NULL)
	{
		p = (char *)malloc(sizeof(char));
		*p = '\0';
		return (p);
	}
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[b] != '\0')
			b++;
	}
	b += i;
	p = (char *)malloc((b + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = 0;
	if (s1 != NULL)
		while (s1[i] != '\0')
		{
			p[i] = s1[i];
			i++;
		}
	b = i;
	i = 0;
	if (s2 != NULL)
		while (s2[i] != '\0')
		{
			p[b] = s2[i];
			i++;
			b++;
		}
	p[b] = '\0';
	return (p);
}
