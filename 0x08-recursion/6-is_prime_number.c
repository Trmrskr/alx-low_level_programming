int prime_check(int, int);

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to be checked
 * Return: 1 if prime 0 otherwise
 */

int is_prime_number(int n)
{
	int i = 3;

	if (n == 1 || n == -1)
		return (0);
	if (n % 2 == 0)
		return (0);
	return (prime_check(n, i));
}

/**
 * prime_check - check for prime with a tester
 * @n: the number which prime number is to find
 * @i: an iterator
 * Return: 1 if prime 0 otherwise
 */

int prime_check(int n, int i)
{
	if (i > 9)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_check(n, i + 2));
}
