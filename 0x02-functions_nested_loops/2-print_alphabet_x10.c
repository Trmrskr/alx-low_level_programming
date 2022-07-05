#include "main.h"

/**
 * print_alphabet_x10 - prints all lower case alphabet 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		i++;
		_putchar('\n');
	}
}
