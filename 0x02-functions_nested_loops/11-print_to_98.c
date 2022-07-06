#include "main.h"
#include <math.h>

void print_digits(int);

/**
 * print_to_98 - print from any number to 98
 * @n: the integer to print from
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			print_digits(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			print_digits(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
			n--;
		}
	}
}

/**
 * print_digits - print all digit of a number
 * @n: number which digit is to be printed
 */

void print_digits(int n)
{

	int num = n, first_dgt, mid_dgt, last_dgt;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}

	last_dgt = num % 10;

	if (num >= 0 && num < 10)
	{
		_putchar(num + '0');
	}
	else if (num >= 10 && num < 100)
	{
		first_dgt = num / 10;
		_putchar(first_dgt + '0');
		_putchar(last_dgt + '0');
	}
	else if (num >= 100 && num < 1000)
	{
		first_dgt = num / 100;
		mid_dgt = (num / 10) % 10;
		_putchar(first_dgt + '0');
		_putchar(mid_dgt + '0');
		_putchar(last_dgt + '0');
	}
	else
	{
		return;
	}
}
