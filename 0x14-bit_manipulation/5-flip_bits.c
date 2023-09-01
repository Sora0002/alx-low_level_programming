#include "main.h"
/**
 * flip_bits - a function that returns 
 *			the number of bits you would need to flip
 * @n: fst number
 * @m: 2nd number
 * Return: the count
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m, b = 1UL;
	unsigned int i = 0;

	while (a)
	{
		if (a & b)
			i++;
		a >>= 1;
	}
	return (i);
}
