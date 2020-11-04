#include "lists.h"

/**
* get_nodeint_at_index - get index node
* @head: pointer head
* @index: index
* Return: index node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (head)
	{
		head = head->next;
		c++;
	}

	if (index > c)
		return (NULL);

	c = 0;

	while (c < index)
	{
		head = head->next;
		c++;
	}
	return (head);
}
