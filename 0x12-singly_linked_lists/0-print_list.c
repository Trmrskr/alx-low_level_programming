#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - print elements in a list
 * @h: list which elements are to be printed
 * Return: the number of node of list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	int len;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			count++;
			continue;
		}

		len = strlen(h->str);

		printf("[%d] %s\n", len, h->str);

		h = h->next;
		count++;
	}
	return (count);
}
