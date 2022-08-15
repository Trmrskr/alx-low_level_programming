#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all elements in a list
 * @h: the pointer to structure element whose values are to be printed
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
