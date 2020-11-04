#include "lists.h"

/**
* add_nodeint - add node at the beginning
* @head: pointer to pointer head of the list
* @n: int in the new struct
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
