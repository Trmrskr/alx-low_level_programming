#include <stdlib.h>

/**
 * array_range - creates an array of integers ordered from min to max
 * @min: min value of array
 * @max: maximum value of array
 * Return: if min > max
 */

int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
