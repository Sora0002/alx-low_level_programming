#include "main.h"
/**
 * _strdup - function
 * @str: string
 *
 * Return: char*
 */
char *_strdup(char *str)
{
	int i = 0;
	char *p;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	p = (char *)malloc(i * sizeof(char));
	if (p == 0)
		return (NULL);
	while (i--)
	{
		p[i] = str[i];
	}
	return (p);
}
