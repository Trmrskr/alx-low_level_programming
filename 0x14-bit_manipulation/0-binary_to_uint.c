#include <string.h>

/**
 * binary_to_uint - a function that converts a binary number to an
 * unsigned int.
 * @b: the string of binary bits
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int pow, b_len, i, num;
	unsigned int sum;

	if (b == NULL)
		return (0);

	pow = 1;
	b_len = strlen(b) - 1;

	if (b_len > 32)
		return (0);

	for (i = 0; i < b_len; i++)
		if (b[i] < '0' || b[i] > '1')
			return (0);

	num = b[b_len] - '0';
	sum = pow * num;

	for (i = b_len - 1; i >= 0; i--)
	{
		pow *= 2;
		num = b[i] - '0';
		sum += num * pow;
	}
	return (sum);
}
