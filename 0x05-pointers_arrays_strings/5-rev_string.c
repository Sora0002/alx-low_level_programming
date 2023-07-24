#include "main.h"
/**
 * rev_string - a function to reverse a string
 * @s: the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int a = 0, b = 0, c;
	char temp;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	c = a;
	while (s[b] != '\0' && a > c / 2)
	{
		temp = s[b];
		s[b] = s[a];
		s[a] = temp;
		b++;
		a--;
	}
}
