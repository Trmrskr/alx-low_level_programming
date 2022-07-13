#include "main.h"

int _strlen(char *);

/**
 * print_rev - print reverse string
 * @s: the string to be printed in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int len = _strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @s: string which length is to be returned
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != 0)
	{
		len++;
		s++;
	}
	return (len);
}
