#include "main.h"
/**
 * _strstr - a function that locates a substring.
 * @haystack: fst string
 * @needle: scnd string
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *p;

	while (*haystack != '\0')
	{
		h = haystack;
		p = needle;
		while (*h == *p && *p != '\0')
		{
			p++;
			h++;
		}
		if (*p == '\0')
			return (haystack);
		haystack++;
	}
	return ('\0');
}
