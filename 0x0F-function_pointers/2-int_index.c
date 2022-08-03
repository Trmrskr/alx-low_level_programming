#include <stddef.h>

/**
 * int_index - function that searcheds for an integer
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer to function compare
 * Return: index on succes, -1 on failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0)
	{
		return (-1);
	}

	if (cmp == NULL || array == NULL)
	{
		return (-1);
	}
	while (index < size)
	{
		if (cmp(array[index]) != 0)
			return (index);
		index++;
	}
	return (-1);
}
