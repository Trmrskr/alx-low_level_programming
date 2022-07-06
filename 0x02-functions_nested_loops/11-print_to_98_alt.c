#include "main.h"
#include <math.h>

/**
 * print_to_98 - print from any number to 98
 * @n: the integer to print from
 */
void print_digits(int);

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			print_digits(n);
			if(n != 98){
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			print_digits(n);
			if(n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
			n--;
		}
	}
}

/**
 * print_digits - print all digit of a number
 * @n: number which digit is to be printed
 */

void print_digits(int n)
{
	int num = n;
	int ten_power = 1, digit;

	while (num > 10)
	{
		num /= 10;
		ten_power *= 10;
	}
	if (n < 10)
	{
		ten_power = 1;
	}
	num = n;

	while (ten_power >= 1)
	{
		digit = num / ten_power;
		_putchar(digit + '0');
		ten_power /= 10;
	}
}
