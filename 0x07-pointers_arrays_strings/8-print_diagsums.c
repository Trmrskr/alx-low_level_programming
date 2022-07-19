#include <stdio.h>

/**
 * print_diagsums - print the diagonal sums of a matrix
 * @a: the arraay matrix
 * @size: the size of the array square
 */

void print_diagsums(int *a, int size)
{
	int i, j, diag_sum_1 = 0, diag_sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				int c;
				c = size - j - 1;

				diag_sum_1 += *(a + (i * size + j));
				diag_sum_2 += *(a + (i * size + c));
			}
		}
	}
	printf("%d, %d\n", diag_sum_1, diag_sum_2);
}
