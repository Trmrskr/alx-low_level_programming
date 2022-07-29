#include <unistd.h>

/**
 * _putchar - prints characters entered as its argument to stdout
 * @c: character to be printed
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
