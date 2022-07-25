#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars
 * , and initializes it with a specific char
 * @size: size of array to be created.
 * @c: character to initialize with
 * Return: an array of strings
 */

char *create_array(unsigned int size, char c)
{
	char *new_array = (char *)malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (size == 0 || new_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(new_array + i) = c;
	}

	return (new_array);
}
