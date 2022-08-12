#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add string to end of list
 * @head: the head of the list
 * @str: string to be added
 * Return: a pointer to the new list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = (*head);

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_node;

	return (last);
}
