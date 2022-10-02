#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at an index
 * @head: head of the list to get node from
 * @index: the position to get node from
 * Return: 1 on successful, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head,
unsigned int index)
{
	dlistint_t *prev_node = NULL, *hd = NULL, *tmp = NULL;
	unsigned int idx = 0;

	if (index < 0)
		return (-1);
	hd = *head;
	while (hd != NULL)
	{
		if (idx == index)
		{
			tmp = hd->next;
			free(hd);
			hd = tmp;
			if (hd != NULL)
				hd->prev = prev_node;
			if (idx != 0)
				prev_node->next = hd;
			if (index == 0)
				*head = hd;
			return (1);
		}
		prev_node = hd;
		hd = hd->next;
		idx++;
	}
	return (-1);
}
