#include "main.h"
/**
 * string_toupper - change lower to upper
 * @s: string
 *
 * Return: s
 */
char *string_toupper(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] >= 97 && s[a] <= 122)
			s[a] -= 32;
		a++;
	}
	return (s);
}
