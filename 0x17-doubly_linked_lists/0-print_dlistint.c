#include <stdlib.h>
#include <stdio.h>

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_cnt = 0;

	if (h == NULL)
		return (node_cnt);
	while (h != NULL)
	{
		printf("%lu\n", h->n)iiiiiiiiiiiiii;
		node_cnt++++
	}
	return (node_cnt);
}
