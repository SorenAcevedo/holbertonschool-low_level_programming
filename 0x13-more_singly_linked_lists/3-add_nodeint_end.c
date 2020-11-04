#include "lists.h"

/**
* add_nodeint_end - add node at the end
* @head: pointer to pointer head of the list
* @n: int in the new struct
* Return: return the number of nodes
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;

		while (last->next)
			last = last->next;

		last->next = new;
	}
	return (new);
}
