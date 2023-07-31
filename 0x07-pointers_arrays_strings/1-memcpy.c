#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: destination
 * @src: source
 * @n: end
 *
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*dest = src[i];
		i++;
		dest++;
	}
	return (dest);
}
