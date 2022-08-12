#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a list
 * @head: list to be freed
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);

		head = head->next;
	}
}
