#include <stdlib.h>

/**
 * dlistint_len - calculates the length of linked list
 * @h: the head of the linked list to be found
 * Return: the length
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		++len;
		h = h->next;
	}
	return (len);
}
