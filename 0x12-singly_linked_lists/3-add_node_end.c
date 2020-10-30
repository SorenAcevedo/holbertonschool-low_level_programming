#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add node at the end.
 * @head: pointer to pointer
 * @str: string
 * Return: NULL if error, else head node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	int n = 0;

	if (strdup(str) == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while (str[n] != 0)
		n++;

	new->str = strdup(str);
	new->len = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;

		while (last->next)
			last = last->next;

		last->next = new;
	}
	return (new);
}
