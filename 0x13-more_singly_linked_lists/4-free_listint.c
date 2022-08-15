#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function frees a listint_t list
 * @head: the head of the list to be freed
 * Description: see the method I used in 0x12-singly_linked_lists is wrong!!
 * valgrind gives error! That method cuts of the head from the link after
 * freeing
 * and does not proceed to free the other elements in the lists.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
