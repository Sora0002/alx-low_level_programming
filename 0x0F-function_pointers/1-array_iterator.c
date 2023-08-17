#include "function_pointers.h"
/**
 * array_iterator - func that execute func
 * @array: array of elements
 * @size: array's size
 * @action: function pointer
 *
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
