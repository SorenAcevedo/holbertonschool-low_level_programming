#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free dlistint
 * @head: head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
