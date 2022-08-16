#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node at an index
 * @head: The head of the singly linked list
 * @index: the index at which to delete node
 * Return: 1 if succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *current_node, *temp;
	size_t idx = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current_node = *head;
	while (current_node != NULL)
	{
		prev_node = current_node;
		current_node = current_node->next;
		idx++;
		if (idx == index)
			break;
	}
	temp = current_node;
	prev_node->next = current_node->next;
	free(temp);

	return (1);
}
