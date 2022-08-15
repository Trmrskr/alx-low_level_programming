#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function frees a listint_t list
 * @head: the head of the list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *head_node = *head;

	while (head_node != NULL)
	{
		tmp = head_node->next;
		free(head_node);
		head_node = tmp;
	}

	*head = NULL;
}
