#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer to the head of the list
 * @n: integer value to be stored in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t = malloc(sizeof(listint_t)), *l = *head;

	if (*head && t)
	{
		t->n = n;
		if (l != NULL)
		{
			while (l->next)
			{
				l = l->next;
			}
			l->next = t;
			*head = l;
		}
		else
			*head = t;
		return (t);
	}
	return (NULL);
}
