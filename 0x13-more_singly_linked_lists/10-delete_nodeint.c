#include "lists.h"

/**
* delete_nodeint_at_index - add node at index
* @head: pointer to pointer head of the list
* @idx: index
* Return: 1 if is done and -1 if fail
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int c = 0;

	if (head && *head)
	{
		if (index == 0)
		{
			temp = (*head)->next;
			free (*head);
			*head = temp;
			return (1);
		}

		temp = *head;

		while (temp && c < index)
		{
			if ((c == index - 1) && temp->next)
			{
				free(temp->next);
				temp->next = (temp->next)->next;
				return (1);
			}
			temp = temp->next;
			c++;
		}
		return (-1);
	}
	return (-1);
}
