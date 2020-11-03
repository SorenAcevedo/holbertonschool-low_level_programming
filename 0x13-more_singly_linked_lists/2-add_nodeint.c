#include "lists.h"

/**
* print_listint - print list with int
* @h: pointer to head of the list
* Return: return the number of nodes
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
