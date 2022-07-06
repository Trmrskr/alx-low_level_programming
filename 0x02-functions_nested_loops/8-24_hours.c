#include "main.h"

/**
 * jack_bauer - prints every minutes of the day
 * Return - null on successful
 */

void jack_bauer(void)
{
	int i =  0, j, i_1st_digit, i_2nd_digit, j_1st_digit, j_2nd_digit;

	while (i < 24)
	{
		i_1st_digit = i / 10;
		i_2nd_digit = i % 10;
		j = 0;
		while (j < 60)
		{
			_putchar(i_1st_digit + '0');
			_putchar(i_2nd_digit + '0');
			_putchar(':');
			j_1st_digit = j / 10;
			j_2nd_digit = j % 10;
			_putchar(j_1st_digit + '0');
			_putchar(j_2nd_digit + '0');
			j++;
			_putchar('\n');
		}
		i++;
	}
}
