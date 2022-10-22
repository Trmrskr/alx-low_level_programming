#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - a function to create a hash table
 * @size: the size of the hash table array
 * Return: the created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t *hash_table;
	hast_node_t arr[size];

	hash_table = malloc(sizeof(hash_node_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = arr;

	return (hash_table);
}
