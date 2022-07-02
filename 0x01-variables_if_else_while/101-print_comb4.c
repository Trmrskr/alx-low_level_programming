#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 if success
 */

int main(void)
{
	int i = 0;
	int hundredth_digit, tenth_digit, unit_digit;

	while (i < 1000)
	{
		hundredth_digit = i / 100;
		tenth_digit = (i / 10) % 10;
		unit_digit = i % 10;

		if ((hundredth_digit < tenth_digit) && (hundredth_digit < unit_digit))
		{
			if (tenth_digit < unit_digit)
			{
				putchar(hundredth_digit + '0');
				putchar(tenth_digit + '0');
				putchar(unit_digit + '0');

				if (i != 789)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		i += 1;
	}
	putchar('\n');
	return (0);
}
