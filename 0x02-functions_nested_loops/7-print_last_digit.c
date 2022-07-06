#include "main.h"

/**
 * print_last_digit - prints last digit
 * @c: argument
 * Return: last_digit if successful
 */

int print_last_digit(int c)
{
	int last_digit;

	if (c < 0)
	{
		int n = -c;
		last_digit = n % 10;
	}
	else{
		last_digit = c % 10;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
