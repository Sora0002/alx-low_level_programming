#include "lists.h"
/**
 * list_len - return the length of stringly linked
 * @h: the linked
 * Return: the length
*/
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

