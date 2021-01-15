#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - set key at index in a new node
 * @ht: hash table.
 * @key: key to include at index
 * @value: value to include at index
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *temp;
	unsigned long int idx;

	if (!ht || !key || !value || *key == 0)
		return (0);

	idx = key_index((unsigned const char *) key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	if (ht->array[idx] == NULL)
	{
		new->value = strdup(value);
		new->key = strdup(key);
		new->next = NULL;
		ht->array[idx] = new;
		return (1);
	}
	temp = ht->array[idx];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			temp->value = strdup(value);
			free(new);
			return (1);
		}
	}
	new->value = strdup(value);
	new->key = strdup(key);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
