#include "lists.h"

/**
* free_listint - free memory space.
* @head: pointer to struct, head node.
*/

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
