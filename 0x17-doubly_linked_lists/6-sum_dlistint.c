#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - sum n elements from double linked list
 * @head: head
 * Return: sum of n elements
 */

int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *temp;
	size_t i, sum = 0;

	if (!head)
		return (0);

	temp = head;

	for (i = 0; temp; i++)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
