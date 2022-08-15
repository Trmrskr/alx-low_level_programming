## 0x13. C - More singly linked lists

This directory is a continuation of the tasks on Singly linked lists. In this directory the tasks involve creating a singly linked list, printing node node value of the list, length of the lists, add node to list, adding node to beginning of list, getting node at a particular index of list, sum the values in a list, inserting and deleting of items in a list.

Tasks 0: Print list
Write a function that prints all the elements of a listint_t list and returns the number of nodes.\n
File: 0-print_listint.c
Prototype: size_t print_listint(const listint_t *h);

Tasks 1: List length
Write a function that returns the number of elements in a linked listint_t list.
- File: 1-listint_len.c
- Prototype: size_t listint_len(const listint_t *h);

Task 2: Add node
Write a function that adds a new node at the beginning of a listint_t list and returns the address of the new element or NULL if it failed.
- File: 2-add_nodeint.c
- Prototype: listint_t *add_nodeint(listint_t **head, const int n);

Task 3: Add node at the end
Write a function that adds a new node at the end of a listint_t list and returns the address of the new element, or NULL if it failed.
- Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
- File: 3-add_nodeint_end.c

Task 4: Free list
Write a function that frees a listint_t list.
- Prototype: void free_listint(listint_t *head);
- File: 4-free_listint.c

Task 5: Free
Write a function that frees a listint_t list and sets the head to NULL.
- Prototype: void free_listint2(listint_t **head);
- File: 5-free_listint2.c

Task 6: Pop
Write a function that deletes the head node of a listint_t linked list, and returns the head node's data (n).
- Prototype: int pop_listint(listint_t **head);
- File: 6-pop_listint.c

Task 7: Get node at index
Write a function that returns the nth node of a listint_t linked list.
- Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
- File: 7-get_nodeint.c

Task 8: Sum list
Write a function that returns the sum of all the data (n) of a listint_t linked list and returns 0 if the list is empty.
- Prototype: int sum_listint(listint_t *head);
- File: 8-sum_listint.c

Task 9: Insert
Write a function that inserts a new node at a given position and returns the address of the new node, or NULL if it failed. If it is not possible to add the new node at index idx, do not add the new node and return NULL
- Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
- Where idx is the index of the list where the new node should be added. index starts at 0.
- File: 9-insert_nodeint.c

Task 10: Delete at index
Write a function that deletes the node at index index of a listint_t linked list, returns 1 if it succeeded and -1 if it failed.
- Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
- Where index is the index of the node that should be deleted. Index starts at 0.
- File: 10-delete_nodeint.c

## ALX SE Programme
