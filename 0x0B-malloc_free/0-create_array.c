#include "main.h"

/**
 * create_array - function to create array with specific size
 * @size: the size of the array
 * @c: the character
 *
 * Return: NULL/ptr
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = (char *)malloc(size * sizeof(char));
	unsigned int i = 0;

	if (size == 0 || ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
