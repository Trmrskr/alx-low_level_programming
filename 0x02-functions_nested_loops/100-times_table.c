#include "main.h"

/**
 * times_table - return 9x9 table
 * Return: null if successful
 */

void print_times_table(int n)
{
	int i = 0, j;

	if (n < 0 || n > 15){
		return;
	}
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			int product = i * j;
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
