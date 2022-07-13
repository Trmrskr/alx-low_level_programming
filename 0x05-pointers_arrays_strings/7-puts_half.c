#include "main.h"

int _strlen(char *);

/**
 * puts_half - prints second half of string
 *
 * @str: the string to print second half of
 */

void puts_half(char *str)
{
	int len = _strlen(str) - 1, halfLen = (len / 2) + 1;

	while (halfLen <= len)
	{
		_putchar(*(str + halfLen));
		halfLen++;
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
