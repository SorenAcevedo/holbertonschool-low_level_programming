#include "lists.h"

/**
* print_listint - print list with int
* @h: pointer to head of the list
* Return: return the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int n;

	while(h)
	{
		printf("%d\n",h->n);
		h  = h->next;
		n++;
	}
	return (n);
}
