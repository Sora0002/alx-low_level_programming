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
 * add_node_end - add new node at the end of list
 * @h: the head
 * @str: the strng to be added
 * Return: the & of the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *t = malloc(sizeof(list_t)), *l = *head;

	if (t == NULL)
		return (NULL);
	if (str != NULL)
	{
		t->str = strdup(str);
		t->len = _strlen(str);
		if (t->str == NULL)
		{
			free(t);
			return (NULL);
		}
		if (l != NULL)
		{
			while (l->next)
			{
				l = l->next;
			}
			l->next = t;
		}
		else
			*head = t;
	}
		return (t);
}