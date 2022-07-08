#include "main.h"

/**
 * print_line - print a straight line
 * @n: argument
 */

void print_square(int n)
{
	if (n > 0)
	{
		int i = 0, j;

		while (i < n)
		{
			j = 0;
			while (j < n)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
