#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_delete - delete ht
 * @ht: hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *head;
	unsigned int i;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			head = ht->array[i];
			while (head)
			{
				temp = head->next;
				free(head->value);
				free(head->key);
				free(head);
				head = temp;
			}
		}
		free(ht->array);
		free(ht);
	}
}
