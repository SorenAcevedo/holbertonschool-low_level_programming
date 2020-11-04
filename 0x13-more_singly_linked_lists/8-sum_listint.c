#include "lists.h"

/**
* sum_listint - sum n data from list
* @h: pointer to head of the list
* Return: return the sum
*/

int sum_listint(listint_t *h)
{
	int sum = 0;

	while (h)
	{
		sum += h->n;
		h  = h->next;
	}
	return (sum);
}
