#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - print len
 * @h: head
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t i;

	if (!h)
		return (0);

	temp = h;

	for (i = 0; temp; i++)
		temp = temp->next;
	return (i);
}
