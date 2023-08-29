#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer of first node of listint_t list.
 * @idx: the index of the list where the new node should be added.
 * @n: integer data for the new node.
 *
 * Return: Address of the new node or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *t, *l = malloc(sizeof(listint_t));

	if (head == NULL || l == NULL)
		return (NULL);
	t = (*head);
	l->n = n;
	if (idx)
	{
		while (t)
		{
			if (i == idx - 1)
			{
				l->next = t->next;
				t->next = l;
				return (l);
			}
			i++;
			t = t->next;
		}
		free(l);
		return (NULL);
	}
	l->next = (*head);
	(*head) = l;
	return (l);
}
