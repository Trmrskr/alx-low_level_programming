#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - function to retrieve value of a node based on key
 * @ht: the hash table to retrieve from
 * @key: the key to use for retrieval
 * Return: the value at the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	int idx = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
