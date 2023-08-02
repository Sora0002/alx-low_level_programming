#include "main.h"
/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: returned string
 * @to: real string
 *
 * Return: s
 */
void set_string(char **s, char *to)
{
	*s = to;
}
