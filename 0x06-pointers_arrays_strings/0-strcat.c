#include "main.h"
/**
 * _strcat -  a function that concatenates two strings
 * @dest: destination
 * @src: source
 *
 * Return: the dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, a = 0, b = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[b] != '\0')
	{
		b++;
	}
	b = i + b;
	a = i;
	i = 0;
	while (a <= b && src[i] != '\0')
	{
		dest[a] = src[i];
		i++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
