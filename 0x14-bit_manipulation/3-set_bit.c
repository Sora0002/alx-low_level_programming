#include "main.h"
/**
 * set_bit - find a bit and set it
 * @n: the number
 * @index: the index
 * Return: 1 on success and -1 on fail
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1UL << index, s = sizeof(unsigned long int) * 8;

	if (index >= s)
	{
		return (-1);
	}
	*n = *n | a;
	return (1);
}
