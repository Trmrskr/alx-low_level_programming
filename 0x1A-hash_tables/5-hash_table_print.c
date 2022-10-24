#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int lens1, lens2, i, new_str_len;

	if (s1 == NULL)
		lens1 = 0;
	else
		lens1 = strlen(s1);

	if (s2 == NULL)
		lens2 = 0;
	else
		lens2 = strlen(s2);

	new_str_len = lens1 + lens2;
	new_str = (char *)malloc((sizeof(char) * new_str_len) + 1);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < new_str_len; i++)
	{
		if (i < lens1)
			new_str[i] = s1[i];
		else
			new_str[i] = s2[i - lens1];
	}
	new_str[i] = '\0';

	return (new_str);
}

/**
 * hash_table_print - prints the content of the hash table
 * @ht: the hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	int prnt_cnt = 0;
	long unsigned int i = 0;

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
