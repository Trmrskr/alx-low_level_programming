#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 if success
 */

int main(void)
{
	int i = 0;
	int last_digit, first_digit;

	while (i < 100)
	{
		last_digit = i % 10;
		first_digit = i / 10;

		if (last_digit > first_digit)
		{
			putchar(first_digit + '0');
			putchar(last_digit + '0');

			if (i != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i += 1;
	}
	putchar('\n');
	return (0);
}
