#include "main.h"
#include <stdio.h>

/**
 * print_number - print digits of a number
 * @n: number as argument
 * Return: void
 */

void print_number(int n)
{
	unsigned int num = n;
	unsigned int num_1 = n;
	int tenth_power = 1;

	if (n < 0)
	{
		num = num_1 = -1 * n;
		_putchar('-');
	}

	while (num >= 10)
	{
		num = num / 10;
		tenth_power *= 10;
	}

	while (tenth_power >= 1)
	{
		int digits = num_1 / tenth_power;

		num_1 = num_1 % tenth_power;
		tenth_power /= 10;
		_putchar(digits + '0');
	}

}
