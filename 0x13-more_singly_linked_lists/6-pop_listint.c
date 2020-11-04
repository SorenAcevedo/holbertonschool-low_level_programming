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

	temp = *head;
	num = temp->n;
	*head = temp->next;

	return (num);
}
