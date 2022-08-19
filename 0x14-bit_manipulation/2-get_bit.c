#include "main.h"

/**
 * get_bit - get bit of a number at an index
 * @n: number whose bit is to be gotten
 * @index: index from which to get bit
 * Return: the bit at the index given
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
		return (-1);
	return (bit & 1);
}
