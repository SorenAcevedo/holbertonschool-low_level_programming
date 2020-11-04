#include "lists.h"

/**
* insert_nodeint_at_index - add node at index
* @head: pointer to pointer head of the list
* @idx: index
* @n: int in the new struct
* Return: return the number of nodes
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int c = 0;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;

		while (c < idx)
		{
			if (temp == NULL)
				return (NULL);
			temp = temp->next;
			c++;
		}
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}
