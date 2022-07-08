#include "main.h"

/**
 * print_diagonal - print a straight line
 * @n: argument
 */

void print_diagonal(int n)
{
	if (n >= 0)
	{
		int i = 1, j;

		while (i <= n)
		{
			j = 1;
			while (j <= n)
			{
				if (i == j)
				{
					_putchar('\\');
					if (j != n)
					{
						_putchar('\n');
					}
					break;
				}
				else
				{
					_putchar(' ');
				}
				j++;

			}
			i++;
		}
	}
	_putchar('\n');
}
