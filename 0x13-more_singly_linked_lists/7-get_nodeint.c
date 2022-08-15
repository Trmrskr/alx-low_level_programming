#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function to get node at a particular index
 * @head: head of list
 * @index: the index of the node to be returned
 * Return: the node at the index given.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
