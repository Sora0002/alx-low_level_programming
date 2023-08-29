#include "lists.h"
/**
 * free_listint - Frees a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	if (head)
	{
		while (head)
		{
			t = head->next;
			free(head);
			head = t;
		}
	}
}
