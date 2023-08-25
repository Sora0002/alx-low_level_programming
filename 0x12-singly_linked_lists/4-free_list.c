#include "lists.h"
/**
 * free_list - free a list
 * @head: the head
 * Return: void
*/
void free_list(list_t *head)
{
	free(head->str);
	free(head->next);
	free(head);
}
