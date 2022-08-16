#include "lists.h"
#include <stddef.h>

/**
 * insert_nodeint_at_index - function inserts node at a particular index
 * @head: the node at the head
 * @idx: the index to insert the node.
 * @n: the number to insert
 * Return: return the head of list after insertion
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev_node, *new_node, *current_node;
	size_t index = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0 || *head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	current_node = *head;
	while (current_node != NULL)
	{
		if (idx == index)
			break;
		prev_node = current_node;
		current_node = current_node->next;
		index++;
	}
	if (idx > index)
	{
		return (NULL);
	}
	new_node->next = current_node;
	prev_node->next = new_node;
	return (*head);
}
