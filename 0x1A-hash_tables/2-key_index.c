#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - Calculates the index for a given key in a hash table.
 *
 * @key: The key to calculate the index for.
 * @size: The size of the array in the hash table.
 *
 * Return: The index at which the key should
 * be stored in the hash table's array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);

	return (hash_value % size);
}
