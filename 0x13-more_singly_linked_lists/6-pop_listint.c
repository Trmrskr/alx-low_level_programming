#include "lists.h"

/**
 * pop_listint - deletes the head node of a list and returns its data
 * @head: the head of the lists whose head is to be cut off
 * Return: the deleted head node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	tmp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (data);
}
