#include "main.h"
/**
 * _strlen - function that return length of string
 * @s: the string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
