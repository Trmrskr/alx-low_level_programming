/**
 * swap_int - a function that swaps the values of two variables
 * @a: a pointer to a variable a.
 * @b: a pointer to a variable b.
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = 0; 
	
	temp = *a;
	*a = *b;
	*b = temp;
}
