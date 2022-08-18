#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary of a number
 * @n: number whose binary is to be printed
 */

void print_binary(unsigned long int n)
{
	int diff;
	unsigned long int two_pow = 1;

/* Get the highest power of two closer to n*/
	while (two_pow * 2 <= n)
		two_pow <<= 1;

	while (two_pow >= 1)
	{
		diff = n - two_pow;
		if (diff >= 0)
		{
			n = diff;
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
/* Note that two_pow >> 1 is equivalent to two_pow * 2 to power 1 */
		two_pow >>= 1;
	}
}
