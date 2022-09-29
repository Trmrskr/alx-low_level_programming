#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add new node to list
 * @head: the head of the list to be added to
 * @n: number to be contained in new node
 * Return: the new head of list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
