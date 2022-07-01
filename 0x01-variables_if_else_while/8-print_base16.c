#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 if success
 */

int main(void)
{
	long int single_digit_number = 0;

	while (single_digit_number < 16)
	{
		if (single_digit_number < 10)
		{
			putchar(single_digit_number + '0');
		}
		else
		{
			putchar(single_digit_number + 'W');
		}
		single_digit_number += 1;
	}
	putchar('\n');
	return (0);
}
