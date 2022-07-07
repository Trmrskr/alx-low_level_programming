#include "main.h"

/**
 * more_numbers - print 0 to 14 10 times
 */

void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		int first_digit, last_digit;
		j = 0;
		while (j < 15)
		{
			first_digit = j / 10;
			last_digit = j % 10;

			if (first_digit != 0)
				_putchar(first_digit + '0');
			_putchar(last_digit + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
