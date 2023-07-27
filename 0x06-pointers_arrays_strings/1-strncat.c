#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
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
	n--;
	if (n > b)
		b = i + b;
	else
		b = i + n;
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
