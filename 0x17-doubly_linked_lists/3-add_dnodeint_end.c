#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a list
 * @head: the head of the list to be added to
 * @n: the new element to be added to the list end
 * Return: the new node added to the list.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *hd = NULL, *new_node = NULL;

	hd = (*head);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		(*head) = new_node;
		return (new_node);
	}

	while (hd->next != NULL)
		hd = hd->next;
	hd->next = new_node;
	new_node->prev = hd;

	return (new_node);
}
