#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * key_index - index calculation with the key
 * @key: str
 * @size: size
 * Return: hash value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
