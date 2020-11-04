#include "lists.h"

/**
* pop_listint - delete de head node
* @head: pointer to pointer head
* Return: n data from head
*/

int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	num = temp->n;
	*head = temp->next;
	free(temp);

	return (num);
}
