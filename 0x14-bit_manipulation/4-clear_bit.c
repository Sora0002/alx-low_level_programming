#include "main.h"
/**
 * clear_bit - function to set bit to 0
 * @n: the number
 * @the index of the bit
 * Return: 1 on success and 0 on fail
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1UL << index, s = sizeof(unsigned long int) * 8;

	if (index >= s)
	{
		return (-1);
	}
	if (*n & a)
	{
		*n = *n ^ a;
	}
	return (1);
}
