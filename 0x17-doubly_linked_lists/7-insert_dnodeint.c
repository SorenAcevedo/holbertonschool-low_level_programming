#include "lists.h"
#include <stdlib.h>

/**
 * add - add node at start
 * @head: pointer to head
 * @n: number of the new node
 * Return: new node
 */

dlistint_t *add(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head)
	{
		(*head)->prev = new;
		new->next = *head;
	}
	else
		new->next = NULL;
	*head = new;
	return (new);
}

/**
 * add_end - add node at the end
 * @head: pointer to head
 * @n: number of the new node
 * Return: new node
 */

dlistint_t *add_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;
	return (new);
}

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: pointer to head
 * @idx: index
 * @n: new node index
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	size_t i = 0;

	if (idx == 0)
		return (add(h, n));

	temp = *h;
	while (i < (idx - 1))
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}

	if (i == idx - 1 && temp->next == NULL)
		return (add_end(h, n));

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	temp->next->prev = new;
	new->next = temp->next;
	temp->next = new;
	new->prev = temp;
	return (new);
}
