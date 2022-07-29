#include <stdlib.h>

char *alloc(void *, unsigned int, unsigned int);

/**
 * _realloc - reallocate memory to a pointer
 * @ptr: pointer to reallocate memory
 * @old_size: the previous size of pointer
 * @new_size: the new size of pointer
 * Return: a pointer to void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *res_ptr;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);

		return (new_ptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	res_ptr = alloc(ptr, old_size, new_size);

	return (res_ptr);
}

/**
 * alloc - a subprocedure to aid the realloc function
 * @ptr: pointer to void
 * @old_size: the old size of allocation
 * @new_size: the new size of allocation
 * Return: a pointer to char
 */

char *alloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *res_ptr, *ptr1;
	unsigned int i = 0;

	ptr1 = ptr;
	new_ptr = malloc(sizeof(*ptr1) * new_size);

	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	res_ptr = new_ptr;

	while (i < old_size)
	{
		res_ptr[i] = *ptr1++;
		i++;
	}

	free(ptr);

	return (res_ptr);
}
