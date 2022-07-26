#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers. 
 * @width: width of array
 * @height: heigth of array
 * Return: NULL on failure or a pointer to array on success
 */

int **alloc_grid(int width, int height)
{
	int **multi_array;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	multi_array = (int **)malloc(sizeof(int *) * height);

	if (multi_array == NULL)
	{
		free(multi_array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		multi_array[i] = (int *)malloc(sizeof(int) * width);
		if (multi_array[i] == NULL)
		{
			for (; i >= 0; i--)
				free(multi_array[i]);

			free(multi_array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			multi_array[i][j] = 0;

	return (multi_array);
}
