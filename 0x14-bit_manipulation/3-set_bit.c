/**
 * set_bit - sets a bit of a number
 * @n: number whose bit is to be set
 * @index: position to set the bit
 * Return: a 1 if it worked or -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int op2;

	if (index > 32)
		return (-1);
	op2 = 1;
	op2 = op2 << index;
	*n = *n | op2;
	return (1);

}
