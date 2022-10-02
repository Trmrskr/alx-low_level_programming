#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - get node at an index
 * @h: head of the list to get node from
 * @idx: the position to get node from
 * @n: number to be inserted
 * Return: the node at index
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h,
unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *hd = NULL, *prev_node = NULL;
	unsigned int index = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	hd = *h;

	while (hd != NULL)
	{
		if (idx == index)
		{
			prev_node->next = new_node;
			new_node->prev = prev_node;
			new_node->next = hd;
			hd->prev = new_node;
			return (new_node);
		}
		index++;
		prev_node = hd;
		hd = hd->next;
	}
	if (hd == NULL)
	{
		if (idx == index)
		{
			if (prev_node != NULL)
				prev_node->next = new_node;
			new_node->prev = prev_node;
			new_node->next = NULL;
		}
	}
	return (new_node);
}
