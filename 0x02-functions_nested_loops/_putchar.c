#include <unistd.h>

/**
 * _putchar - prints characters
 * Return: 0 if successful
 */

int _putchar (char c)
{
	write(1, &c, 1);
	return 0;
}
