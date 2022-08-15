#include <stddef.h>
#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a linked
 * list
 * @h: linked list whose number of elements is to be returned
 * Return: the number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
