#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 if success
 */

int main(void)
{
	int i = 0, j;

	while (i < 100)
	{
		j = 0;
		while (j < 100)
		{
			int i_1st_digit, i_2nd_digit, j_1st_digit, j_2nd_digit;

			i_1st_digit = i / 10;
			i_2nd_digit = i % 10;
			j_1st_digit = j / 10;
			j_2nd_digit = j % 10;

			if (j > i)
			{
				putchar(i_1st_digit + '0');
				putchar(i_2nd_digit + '0');
				putchar(' ');
				putchar(j_1st_digit + '0');
				putchar(j_2nd_digit + '0');

				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
