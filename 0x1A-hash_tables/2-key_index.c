#include "hash_tables.h"

/**
 * key_index - uses the djb2 algorithm to generate the key index of the string
 * @key: the string to use to generate the key index
 * @size: the size of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
