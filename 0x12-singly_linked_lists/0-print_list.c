#include <stdio.h>
#include "lists.h"

/**
* print_list - print elements in list
* @h: pointer to struct
* Return: number of elements
*/

size_t print_list(const list_t *h)
{
	int ele = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		ele++;
	}
	return (ele);
}
