#include <stdlib.h>
#include "lists.h"

/**
* print_list - print elements in list
* @h: pointer to struct
* Return: number of elements
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
