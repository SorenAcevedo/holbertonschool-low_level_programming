#include "lists.h"

/**
* delete_nodeint_at_index - delete node at index
* @head: pointer to pointer head
* Return: n data from head
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int num, c = 0;
	listint_t *temp;

	temp = *head;

	while (c < index)
	{
		temp = temp->next;
		c++;
	}

	num = temp->n;
	*head = temp->next;

	return (num);
}
