#include "lists.h"
#include <stdlib.h>

/**
 * print_dlistint - print double linked list
 * @h: head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t i;

	if (!h)
		return (0);

	temp = h;

	for (i = 0; temp; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
