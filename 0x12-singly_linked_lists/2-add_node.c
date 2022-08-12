#include "lists.h"
#include <string.h>

/**
 * add_node - add node to a list
 * @head: head of the node
 * @str: value to be added to the list
 * Return: the pointer to the new list item (head)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	
	new_node->str = malloc(sizeof(str));
	new_node->str = malloc(sizeof(list_t));

	if (new_node->str == NULL || new_node->next == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
