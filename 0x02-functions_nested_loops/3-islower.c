#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: The character to check
 *
 * Return: 1 on success and 0 on otherwise
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
		return (0);
	else
		return (1);
}
