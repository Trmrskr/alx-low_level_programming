#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table to which to add to
 * @key: the string to use for inserting and searching the hash table
 * @value: the value associated with the key
 * Return: 1 if it succeed, 0-otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *new_node;
	int idx = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	node = ht->array[idx];
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = node;
	/* insert new_node to array[index] if node is NULL */
	if (node == NULL)
	{
		ht->array[idx] = new_node;
		return (1);
	}
	/**
	 * loop through list, if key already exists simply replace the
	 * corresponding value
	 */
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
