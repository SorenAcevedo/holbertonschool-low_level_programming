#include "lists.h"

/**
* free_listint2 - free memory space and put head on NULL.
* @head: pointer to struct, head node.
*/

void free_listint2(listint_t **head)
{
	listint_t *next = NULL;

	if (head == NULL)
		return;

	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	*head = NULL;
}
