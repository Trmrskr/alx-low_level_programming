#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function frees a listint_t list
 * @head: the head of the list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

/* if head does not have an address, return from function */
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
