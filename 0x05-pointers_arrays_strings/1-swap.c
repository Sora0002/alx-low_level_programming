#include "main.h"
/**
 * swap_int - swap a value to two integers
 * @a: first int
 * @b: second int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
