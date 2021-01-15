#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - get key at index in a new node
 * @ht: hash table.
 * @key: key to include at index
 * Return: Value if it succeeded, Null otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int idx;

	idx = key_index((unsigned const char *) key, ht->size);

	temp = ht->array[idx];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
