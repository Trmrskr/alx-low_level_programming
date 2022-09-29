#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - print content of a doubly linked list
 * @h: the head of the list to be printed
 * Return: count of node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_cnt = 0;

	while (h != NULL)
	{
		printf("%u\n", h->n);
		node_cnt++;
		h = h->next;
	}
	return (node_cnt);
}
