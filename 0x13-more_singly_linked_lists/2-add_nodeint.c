#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add new node to beginning of list
 * @head: the head of the list to be added to
 * @n: item to be added to new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
/* if *head=NULL, new_node->next=NULL, otherwise new_node->next=*head */
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
