#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - sum of elements in a dll
 * @head: the head of the linked list
 * Return: sum of dll, or 0 if head is null
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
