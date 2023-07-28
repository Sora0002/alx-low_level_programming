#include "main.h"
/**
 * cap_string - a function to cap
 * @s: string
 *
 * Return: char
 */
char *cap_string(char *s)
{
	int a = 0;
	char b;

	while (s[a] != '\0')
	{
		b = s[a - 1];
		if (s[a] >= 97 && s[a] <= 122)
		{
			if (b == '\t' || b == ' ' || b == '\n' || b == ',')
				s[a] -= 32;
			else if (b == ';' || b == '.' || b == '!' || b == '?' || b == '\"')
				s[a] -= 32;
			else if (b == '(' || b == ')' || b == '{' || b == '}')
				s[a] -= 32;
		}
		a++;
	}
	return (s);
}
