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
	int count_digit = 0, digit;

	while (num != 0)
	{
		num /= 10;
		count_digit += 1;
	}
	if (n == 0)
	{
		count_digit = 1;
	}
	num = n;

	while (count_digit != -1)
	{
		digit = num / (int)pow((double)10, (double)count_digit);

		_putchar(digit + '0');
		num = num % (int)pow(10, count_digit);
		count_digit--;
	}
}
