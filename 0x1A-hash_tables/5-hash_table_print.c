#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_print - get key at index in a new node
 * @ht: hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned int i;
	char *spr = "";

	if (ht)
	{
		putchar('{');
		for (i = 0; ht->size > i; i++)
		{
			temp = ht->array[i];
			while (temp)
			{
				printf("%s'%s': %s", spr, temp->key, temp->value);
				temp = temp->next;
				spr = ", ";
			}
		}
		printf("}\n");
	}
}
