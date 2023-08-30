#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t, *l;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	t = (*head);
	if (index)
	{
		while (t)
		{
			if (i == index)
			{
				l->next = t->next;
				free(t);
				return (1);
			}
			l = t;
			i++;
			t = t->next;
		}
	}
	else
	{
		(*head) = (*head)->next;
		free(t);
		return (1);
	}
	return (-1);
}
