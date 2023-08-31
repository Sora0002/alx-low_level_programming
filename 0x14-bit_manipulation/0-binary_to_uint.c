#include "main.h"
/**
 * _strlen - return the length of string
 * @str: the string
 *
 * Return: length
*/
int _strlen(const char *str)
{
	int length;

	for (length = 0; str[length] != 0; length++)
		;
		return (length);
}
/**
 * _pow - function like pow
 * @ba: base
 * @e: the power
 * Return: result
*/
int _pow(int ba, int e)
{
	if (e == 0)
		return (1);
	return (ba * _pow(ba, e - 1));
}
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: the binary number
 * Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, i = 0;
	int len;

	if (!b)
		return (0);
	len = _strlen(b) - 1;
	while (len >= 0)
	{
		if (b[len] == '1' || b[len] == '0')
		{
			if (b == 0)
			{
				len--;
				continue;
			}
			sum += _pow(2, i);
			i++;
			len--;
			continue;
		}
		return (0);
	}
	return (sum);
}