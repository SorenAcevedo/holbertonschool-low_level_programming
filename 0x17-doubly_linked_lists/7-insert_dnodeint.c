#include "lists.h"
#include <stdlib.h>

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

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	while (i < (idx - 1))
	{
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
		temp = temp->next;
		i++;
	}

	if (i == idx - 1)
		return (add_dnodeint_end(h, n));

	temp->next->prev = new;
	new->next = temp->next;
	temp->next = new;
	new->prev = temp;
	return (new);
}
