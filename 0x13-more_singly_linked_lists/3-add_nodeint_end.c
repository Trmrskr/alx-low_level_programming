#include "lists.h"
#include "stddef.h"

/**
 * add_nodeint_end - add node at the end of the list
 * @head: the head of the node
 * @n: the item to be added to the end of list
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *end;

	new_node = malloc(sizeof(listint_t));
	end = (*head);

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (end->next != NULL)
	{
		end = end->next;
	}

	end->next = new_node;

	return (*head); /* This can also be end */
}
