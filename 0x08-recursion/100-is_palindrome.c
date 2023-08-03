#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: string
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}

/**
 * check - check r and s
 * @s: string
 * @r: start index
 * @l: last index
 * @m: middle
 *
 * Return: 0 or 1
 */
int check(char *s, int r, int l, int m)
{
	if (r <= m && l > m)
	{
		if (s[r] == s[l])
			return (check(s, r + 1, l - 1, m));
		else
			return (0);
	}
	return (1);
}

/**
 * is_palindrome - check if string is palindrome
 * @s: string
 * Return: 1 on palindrome & 0 if not
 */
int is_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1, r = 0, m = l / 2;

	if (l + 1 == 0)
	{
		return (0);
	}
	return (check(s, r, l, m));
}
