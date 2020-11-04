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
	listint_t *new, *temp = NULL;
	unsigned int c = 0;

	if (head)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);

		new->n = n;

		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (*head);
		}

		temp = *head;

		while (temp && c < idx)
		{
			if (c == idx - 1)
			{
				new->next = temp->next;
                		temp->next = new;
                		return (new);
			}
			temp = temp->next;
			c++;
		}
		return (NULL);
	}
	return (NULL);
}
