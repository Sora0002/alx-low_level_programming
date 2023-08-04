#include "main.h"
/**
 * _atoi - string to number
 * @s: string
 *
 * Return: the number
 */
int _atoi(char *s)
{
	int s1 = 1;
	unsigned int n = 0;

	do {
		if (*s == '_')
			s1 *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (*s - '0') + (n * 10);
		else if (n > 0)
			break;
	} while (*s++);
	return (n * s1);
}
