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
	int i = 0;

	if (!head || !l)
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
			l = node;
			i++;
			t = t->next;
		}
	}
	else
	{
		t = (*head)->next;
		(*head) = t;
		return (1);
	}
	return (-1);
}
