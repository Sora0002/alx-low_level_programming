#include "main.h"
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a = 1UL << index, s = sizeof(unsigned long int) * 8;
	
	if (index >= s)
	{
		return -1; 
	}
	if (n & a)
	{
		return (1);
	}
	return (0);
}