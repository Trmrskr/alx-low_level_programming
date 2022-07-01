#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 if success
 */

int main(void)
{
	int single_digit_number = 0;

	while (single_digit_number < 10)
	{
		printf("%d", single_digit_number);
		single_digit_number += 1;
	}
	putchar('\n');
	return (0);
}
