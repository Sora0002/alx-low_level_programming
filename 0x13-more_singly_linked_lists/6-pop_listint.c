#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: A pointer to the pointer of the first node of the list
 *
 * Return: The head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int a;

	if (head && *head)
	{
		p = (*head)->next;
		a = (*head)->n;
		free(*head);
		*head = p;
		return (a);
	}
	return (0);
}
