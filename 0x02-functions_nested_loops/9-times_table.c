#include "main.h"

/**
 * times_table - return 9x9 table
 * Return: null if successful
 */

void times_table(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			int product = i * j;
			int first_dgt = product / 10;
			int last_dgt = product % 10;

			if (product < 10)
			{
				if (j == 0)
				{
					_putchar(last_dgt + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(last_dgt + '0');
				}
			}
			else
			{
				_putchar(first_dgt + '0');
				_putchar(last_dgt + '0');
			}
			if (j != 9)
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
