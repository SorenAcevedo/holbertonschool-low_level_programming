#include "lists.h"

/**
* listint_len - print list with int
* @h: pointer to head of the list
* Return: return the number of nodes
*/

size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h)
	{
		h  = h->next;
		n++;
	}
	return (n);
}
