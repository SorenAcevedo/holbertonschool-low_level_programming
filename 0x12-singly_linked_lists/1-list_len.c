#include <stdio.h>
#include "lists.h"

/**
* print_list - print elements in list
* @h: pointer to struct
* Return: number of elements
*/

size_t list_len(const list_t *h)
{
	int ele = 0;

	while (h)
	{
		h = h->next;
		ele++;
	}
	return (ele);
}
