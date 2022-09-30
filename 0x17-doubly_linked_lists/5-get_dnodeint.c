#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get node at an index
 * @head: head of the list to get node from
 * @index: the position to get node from
 * Return: the node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head,
unsigned int index)
{
	dlistint_t *queried_node = NULL;
	unsigned int idx = 0;

	while (head != NULL)
	{
		if (idx == index)
		{
			queried_node = head;
			return (queried_node);
		}
		idx++;
		head = head->next;
	}
	return (queried_node);
}
