#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: pointer to head
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	size_t i = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		if (temp->next)
		{
			*head = temp->next;
			(*head)->prev = NULL;
		}
		else
			*head = NULL;
		free(temp);
		return (1);
	}
	while (i < index)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	if (temp->next)
		temp->next->prev = temp->prev;
	temp->prev->next = temp->next;

	free(temp);

	return (1);
}
