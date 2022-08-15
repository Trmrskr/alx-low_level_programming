#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data in a linked
 * list
 * @head: the head of the lists whose sum is to be calculated
 * Return: sum if head not equal to NULL, 0 otherwise
 */

int sum_listint(listint_t *head)
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
