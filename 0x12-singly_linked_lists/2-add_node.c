#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add node.
 * @head: pointer to pointer
 * @str: string
 * Return: NULL if error, else head node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;
	*head = new;

	return (*head);
}
