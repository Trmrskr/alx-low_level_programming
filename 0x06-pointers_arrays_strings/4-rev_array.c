/**
 * reverse_array - reverse an array
 * @a: array to be reversed
 * @n: number of elements in array.
 */

void reverse_array(int *a, int n)
{
	int temp, i = 0;

	while (i < n)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}
