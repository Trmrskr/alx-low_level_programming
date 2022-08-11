#include <stddef.h>
#include "lists.h"

/**
 * list_len - a function that calculate the length of a list
 * @h: the list which length is to be found
 * Return: the length of string of size type size_t
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
