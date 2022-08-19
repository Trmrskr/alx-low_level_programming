/**
 * flip_bits - returns number of bits to be flipped
 * @n: first number to be checked
 * @m: second number to be checked
 * Return: number of bits needed to be fliped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int idx, flips = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (idx = 0; idx < j; idx++)
	{
		if ((m & 1) != (n & 1))
			flips += 1;
		n =  n >> 1;
		m = m >> 1;
	}

	return (flips);
}
