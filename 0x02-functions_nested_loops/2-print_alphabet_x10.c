#include "main.h"

/**
 * print_alphabet_x10 - prints all lower case alphabet 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		print_alphabet();
		i++;
	}
	_putchar('\n');
}
