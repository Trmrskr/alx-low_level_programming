#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free list
 * @head: the head of the list
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
