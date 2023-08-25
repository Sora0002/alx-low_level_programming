#include "lists.h"
/**
 * _strlen - return string length
 * @str: the string
 * Return: length
*/
int _strlen(const char *str)
{
	int length;

	for (length = 0; str[length] != 0; length++)
		;
		return (length);
}
/**
 * add_node - add a node to the list
 * @head: the head of the list
 * @str: the string of the new node
 * Return: & of the new node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(list_t));
	if (head == NULL || n == NULL)
		return (NULL);
	if (str != NULL)
	{
		n->len = _strlen(str);
		n->str = strdup(str);
		if (n->str == NULL)
		{
			free(n);
			return (NULL);
		}
	}
	n->next = *head;
	*head = n->next;
	return (n);
}
