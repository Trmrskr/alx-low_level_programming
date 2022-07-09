#include "main.h"

/**
 * print_number - print digits of a number
 * @n: number as argument
 */

void print_number(long int n)
{
	int num = n, tenth_power = 1;

	if (n < 0)
	{
		num = -n;
		n = -n;
		_putchar('-');
	}

	while (num >= 10)
	{
		num = num / 10;
		tenth_power *= 10;
	}

	while (tenth_power >= 1)
	{
		int digits = n / tenth_power;

		n = n % tenth_power;
		tenth_power /= 10;
		_putchar(digits + '0');
	}
}