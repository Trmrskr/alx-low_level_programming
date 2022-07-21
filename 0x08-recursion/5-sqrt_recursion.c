int _sqrt(int n, int i);

/**
 * _sqrt_recursion - find square root of a number
 * @n: number to find square root of
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt(n, i));
}

/**
 * _sqrt - The recursive square root function
 * @n - The number to find square root of
 * Return: iteration
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
