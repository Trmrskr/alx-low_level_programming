#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: the size of memory to be allocated
 * Return: a void pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
