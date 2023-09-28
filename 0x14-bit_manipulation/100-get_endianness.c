#include "main.h"
/**
 * get_endianness - a function to get endianness
 *
 * Return: 0 or 1;
*/
int get_endianness(void)
{
	unsigned int n = 1, b;

	b = *(char *)&n;
	return (b);
}
