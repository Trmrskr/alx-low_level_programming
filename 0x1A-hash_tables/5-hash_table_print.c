#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_print - prints the content of the hash table
 * @ht: the hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	int prnt_cnt = 0;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (prnt_cnt == 0)
				printf("'%s': '%s'", node->key, node->value);
			else
				printf(", '%s': '%s'", node->key, node->value);
			node = node->next;
			prnt_cnt++;
		}
	}
	printf("}\n");
}
