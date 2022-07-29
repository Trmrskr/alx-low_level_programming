#include <stdlib.h>
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
	char *res_ptr, *ptr1;
	unsigned int i = 0;

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
	return (ptr);
}
