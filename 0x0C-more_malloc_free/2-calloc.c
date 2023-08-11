#include "main.h"
/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: the buffer
 * @b: the byte
 * @n: the end
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = b;
	return (p);
}
/**
 * _calloc - function like calloc
 * @nmemb: number
 * @size: the size of parts
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
