#include "main.h"

/**
 * get_bit - get bit of a number at an index
 * @n: number whose bit is to be gotten
 * @index: index from which to get bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	int count = 0;

	while (n != 0)
	{
		n >>= 2;
		bit = n % 2;
		if (count == index)
		{
			_putchar(bit);
			return (1);
		}
		count++;
	}
	return (-1);
}
