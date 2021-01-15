#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_create - create hash table.
 * @size: size of hash table.
 * Return: hash table or null if fail.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned int i;

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);

	new->array = malloc(size * sizeof(hash_table_t *));
	if (!new->array)
	{
		free(new);
		return (NULL);
	}

	new->size = size;
	for (i = 0; i < size; i++)
		new->array[i] = (NULL);

	return (new);
}
