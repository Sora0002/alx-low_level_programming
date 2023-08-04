#include "main.h"
/**
 * _strcpy - function to copy two functions
 * @dest: destination
 * @src: source
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	if (a != 0)
	{
		dest[a] = '\0';
	}
	return (dest);
}
