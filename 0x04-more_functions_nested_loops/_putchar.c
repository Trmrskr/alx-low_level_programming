#include <unistd.h>

/**
 * _putchar - prints characters
 * Return: 0 if successful
 */

void _putchar (int c)
{
	write(1, &c, 1);
}
