#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add string to end of list
 * @head: the head of the list
 * @str: string to be added
 * Return: a pointer to the new list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t new_node = malloc(sizeof(list_t));

	new_node->str = malloc(sizeof(list_t));
	new_node->next = malloc(sizeof(list_t));

	if (new_node->str == NULL || new_node->next == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->next = NULL;

	while (end != NULL)
	{
		if (end->next == NULL)
		{
			end->next = new_node;
		}
		end = end->next;
	}
	return (*head);
}
