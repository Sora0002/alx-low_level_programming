#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to head of list
 *
 * Return: sum of all the data (n) in the list, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *t;

	if (!head)
		return (sum);
	t = head;
	while (t)
	{
		sum += t->n;
		t = t->next;
	}
	return (sum);
}
