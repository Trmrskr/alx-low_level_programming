#include "main.h"

/**
 * puts2 - every other character
 * @str: string to manipulate
 */

void puts2(char *str)
{
	int i = 0, len = _strlen(str) - 1;

	while (i <= len)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
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
