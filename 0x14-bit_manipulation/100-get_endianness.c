#include <stdio.h>

/**
 * get_endianness - What this function returns will determine if the
 * processor on which the code is run is a little endian or a big endian
 * processor.
 *
 * Description: if the first byte returned is a zero, it is Big endian
 * else it is little endian. A little endian processor stores least
 * significant byte in the least address while a big endian processor
 * stores the most significant byte in the least address.
 *
 * Return: the value of the first bytes of an address.
 */

int get_endianness(void)
{
	int num = 1;
	int *p = &num;

	return (*p);
}
