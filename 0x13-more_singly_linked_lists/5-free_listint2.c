#include "lists.h"
/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: A pointer to a pointer to the first node of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (*head)
	{
		while (*head)
		{
			t = (*head)->next;
			free(*head);
			*head = t;
		}
		*head = NULL;
	}
}
