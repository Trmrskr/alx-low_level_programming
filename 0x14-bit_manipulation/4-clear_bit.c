/**
 * clear_bit - clear bit at the index of a number
 * @n: number whose bit is to be cleared
 * @index: the index of the bit to be cleared
 * Return: 1 if successful, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int op1;

	if (index > 32)
		return (-1);

	op1 = 1;
	op1 = op1 << index;
	op1 = ~ op1;
	*n = *n & op1;

	return (1);
}
