#include "lists.h"
/**
 * free_list - free a list
 * @head: the head
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *t;

	while (head != NULL)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}
