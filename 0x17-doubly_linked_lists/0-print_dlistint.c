#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_cnt = 0;

	if (h == NULL)
		return (node_cnt);
	while (h != NULL)
	{
		printf("%u\n", h->n);
		node_cnt++;
		h = h->next;
	}
	return (node_cnt);
}
