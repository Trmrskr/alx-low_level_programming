#include "main.h"

void print_digits(int, int);

/**
 * print_times_table - return nxn table
 * @n: argument
 */

void print_times_table(int n)
{
	int i = 0, j;

	if (n < 0 || n > 15)
		return;

	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			int product = i * j;

			print_digits(product, j);
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');

		i++;
	}
}

/**
 * print_digits - format and prints digit
 * @product: integer value argument
 * @j: the looping variable
 */
void print_digits(int product, int j)
{
	int first_dgt, last_dgt = product % 10, mid_dgt;

	if (product < 10)
	{
		if (j == 0)
		{
			_putchar(last_dgt + '0');
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(last_dgt + '0');
		}
	}
	else if (product >= 10 && product < 100)
	{
		first_dgt = product / 10;
		_putchar(' ');
		_putchar(first_dgt + '0');
		_putchar(last_dgt + '0');
	}
	else
	{
		first_dgt = product / 100;
		mid_dgt = (product / 10) % 10;

		_putchar(first_dgt + '0');
		_putchar(mid_dgt + '0');
		_putchar(last_dgt + '0');
	}
}
