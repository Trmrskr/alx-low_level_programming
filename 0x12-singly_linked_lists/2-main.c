#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
	list_t *head;

	head = NULL;
	add_node(&head, "Alexander");
	add_node(&head, "Asaia");
	print_list(head);
	return (0);
}
