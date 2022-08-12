#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add node to a list
 * @head: head of the node
 * @str: value to be added to the list
 * Return: the pointer to the new list item (head)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	int len = strlen(str);

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
