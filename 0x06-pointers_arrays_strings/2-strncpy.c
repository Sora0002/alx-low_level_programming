#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: destination
 * @src: source
 * @n: bytes
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, b = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[b] != '\0')
	{
		b++;
	}
	i = 0;
	while (i < n)
	{
		if (i >= b && n > b)
		{
			dest[i] = '\0';
		}
		else
			dest[i] = src[i];
		i++;
	}
	return (dest);
}
