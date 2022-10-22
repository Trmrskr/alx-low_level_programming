#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - a function to create a hash table
 * @size: the size of the hash table array
 * Return: the created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int idx = 0;

	hash_table = malloc(sizeof(hash_node_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;

	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	
	while (idx < size)
	{
		hash_table->array[idx] = NULL;
		idx++;
	}

	return (hash_table);

