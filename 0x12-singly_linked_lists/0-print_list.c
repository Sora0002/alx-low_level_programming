#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: the array with list_t type
 * Return: the size of the array
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			i++;
			continue;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}