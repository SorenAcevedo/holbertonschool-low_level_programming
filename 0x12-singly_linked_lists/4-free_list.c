#include <stdlib.h>
#include "lists.h"

/**
* free_list - free memory space.
* @head: pointer to struct, head node.
*/

void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
