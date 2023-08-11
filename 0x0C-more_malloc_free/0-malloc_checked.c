#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: the size
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == 0)
		exit(98);
	return (ptr);
}
