#include "main.h"
/**
 * _strcmp -  a function that compares two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: size
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, b;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		b = s1[i] - s2[i];
		if (b == 0)
		{
			i++;
			continue;
		}
		else if (b != 0)
			break;
	}
	return (b);
}
