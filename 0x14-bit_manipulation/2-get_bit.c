#include "main.h"
/**
 * get_bit - function to get specific bit on specific index
 * @n: the integer
 * @index: the position
 * Return: 1 or 0 or -1 if not found
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a = 1UL << index, s = sizeof(unsigned long int) * 8;

	if (index >= s)
	{
		return (-1);
	}
	if (n & a)
	{
		return (1);
	}
	return (0);
}
