#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - the function that executes a function given as a
 * parameter on each element of an array
 * @array: array which element are to be passed to function pointer
 * @size: the size of the array
 * @action: function pointer to process elment of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
