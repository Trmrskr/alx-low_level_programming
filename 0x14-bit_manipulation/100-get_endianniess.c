#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianniess(void)
{
	unsigned int a = 10;
	char *c = (char *) &a;

	return (*a);
}
