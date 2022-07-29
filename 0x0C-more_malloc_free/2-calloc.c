#include <stdlib.h>

/**
 * _calloc - allocates memory
 * @nmemb: The number of element
 * Return: pointer to new memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *alloc;
	char *buffer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	alloc = malloc(size * nmemb);

	if (alloc == NULL)
		return (NULL);
	
	buffer = alloc;

	for (i = 0; i < (size * nmemb); i++)
		buffer[i] = '\0';

	return (alloc);
}
